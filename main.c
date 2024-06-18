#include "modules/open_gl/open_gl.h"
#include "modules/mesh_grid/mesh_grid.h"
#include <GL/glu.h>

/**
 * @brief Creates a fullscreen openGL window.
 * @return {GLFWwindow *} The window.
 */
GLFWwindow *create_fullscreen_window() {
    const GLFWvidmode *mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
    if (mode == NULL) {
        return NULL;
    }
    GLFWwindow *window = glfwCreateWindow(mode->width, mode->height, "C Physics", glfwGetPrimaryMonitor(), NULL);
    glfwMakeContextCurrent(window);

    return window;
}

/**
 * @brief Creates a mesh_grid_t object.
 * @return {mesh_grid_t *} The mesh grid.
 */
mesh_grid_t *create_mesh_grid() {
    return mesh_grid_create(1200, 1200, 1200);
}

int main(void) {

    if (open_gl_initialize() == OPEN_GL_INITIALIZE_FAILURE) {
        return 1;
    }

    GLFWwindow *window = create_fullscreen_window();
    if (window == NULL) {
        return 1;
    }

    mesh_grid_t *mesh_grid = create_mesh_grid();

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        // When escape is pressed, close the window
        //
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, GLFW_TRUE);
        }


        glfwSwapBuffers(window);
        glfwPollEvents();

    }


    return 0;
}
