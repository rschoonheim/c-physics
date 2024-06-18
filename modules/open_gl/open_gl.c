#include "open_gl.h"

/** @inheritDoc */
int open_gl_initialize(void) {
    if (!glfwInit()) {
        return OPEN_GL_INITIALIZE_FAILURE;
    }

    return OPEN_GL_INITIALIZE_SUCCESS;
}

/** @inheritDoc */
GLFWwindow *open_gl_create_window(int width, int height, const char *title) {
    return glfwCreateWindow(width, height, title, NULL, NULL);
}