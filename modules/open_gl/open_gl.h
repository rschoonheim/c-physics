#ifndef C_PHYSICS_OPEN_GL_H
#define C_PHYSICS_OPEN_GL_H


#include <GLFW/glfw3.h>

#define OPEN_GL_INITIALIZE_SUCCESS 0
#define OPEN_GL_INITIALIZE_FAILURE 1

/**
 * @brief Initializes the OpenGL context.
 *
 * @return OPEN_GL_INITIALIZE_SUCCESS if the OpenGL context was initialized successfully.
 */
int open_gl_initialize(void);

/**
 * @brief Creates a window.
 *
 * @param width The width of the window.
 * @param height The height of the window.
 * @param title The title of the window.
 *
 * @return A pointer to the window.
 */
GLFWwindow *open_gl_create_window(int width, int height, const char *title);

#endif //C_PHYSICS_OPEN_GL_H
