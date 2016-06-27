//
// Created by Aswin Mohan on 27/06/16.
//

#include <Window.h>

int main(){
    using namespace grunge;
    using namespace graphics;

    Window window("name" , 800 , 600);
    glClearColor(0.1f , 0.2f , 0.3f , 0.4f);

    while (window.isOpen()) {
        window.clear();
        glBegin(GL_TRIANGLES);
        glVertex2f(-0.5f , -0.5f);
        glVertex2f( 0.0f ,  0.5f);
        glVertex2f( 0.5f , -0.5f);
        glEnd();
        window.update();
    }

    return 0;
}