#include "modules/open_gl/open_gl.h"
#include "modules/mesh_grid/mesh_grid.h"

int main(void) {

    if (open_gl_initialize() == OPEN_GL_INITIALIZE_FAILURE) {
        return 1;
    }

    int width = 800;
    int height = 600;
    int depth = 800;

    GLFWwindow *window = open_gl_create_window(width, height, "C-Physics");

    mesh_grid_t *mesh_grid = mesh_grid_create(width, width, depth);


    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }


    return 0;
}
