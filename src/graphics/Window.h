/*
 * Author :: Aswin Mohan
 *
 * @Description : Draws a simple window
 */

#ifndef GRUNGEENGINE_WINDOW_H
#define GRUNGEENGINE_WINDOW_H

#include <GLFW/glfw3.h>
#include <iostream>

namespace grunge{
    namespace graphics {

        class Window {
        private:
            const char *_name;
            int _height;
            int _width;

            GLFWwindow *_window;

        private:
            bool initWindow();

        public:
            Window(const char *name , int hieght , int width);

            void update();
            void clear();
            bool isOpen();

            ~Window();
        };

    }
}

#endif //GRUNGEENGINE_WINDOW_H
