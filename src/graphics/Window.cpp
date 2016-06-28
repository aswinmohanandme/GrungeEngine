//
// Created by Aswin Mohan on 27/06/16.
//

#include "Window.h"

namespace grunge{
    namespace graphics {

        Window::Window(const char *name , int hieght , int width) {
            _name = name;
            _height = hieght;
            _width = width;

            initWindow();
        }

        // Initialise the Window
        bool Window::initWindow() {

            if(!glfwInit()) {
                std::cout << " Cannot Initialise GLFW " << std::endl;
                return false;
            }

            // Create the Window
            _window = glfwCreateWindow(_width , _height , _name , NULL , NULL);
            if (!_window){
                std::cout << " Cannot Create Window " << std::endl;

                glfwTerminate();
                return false;
            }

            glfwMakeContextCurrent(_window);


            if (glewInit() != GLEW_OK){
                std::cout << " Cannot Open GLEW " << std::endl;
                return false;
            }
            std::cout << "Current Version of OpenGl " << GL_VERSION << std::endl;

            return true;
        }

        // Update the Window
        void Window::update() {
            glfwSwapBuffers(_window);
            glfwPollEvents();
        }

        // Clear the Screen and set the buffers
        void Window::clear() {
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        }

        // Check if the Window is Open
        bool Window::isOpen() {
            return glfwWindowShouldClose(_window) == false;
        }

        Window::~Window() {
            glfwTerminate();
        }
    }
}
