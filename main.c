#include "modules/open_gl/open_gl.h"

int main(void) {

    if (open_gl_initialize() == OPEN_GL_INITIALIZE_FAILURE) {
        return 1;
    }

    GLFWwindow *window = open_gl_create_window(800, 600, "C-Physics");

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }



    return 0;
}
