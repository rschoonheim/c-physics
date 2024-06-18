#ifndef C_PHYSICS_MESH_GRID_H
#define C_PHYSICS_MESH_GRID_H

typedef struct {
    int width;
    int height;
    int depth;
} mesh_grid_t;

/**
 * @brief Creates a mesh grid.
 *
 * @param width The width of the mesh grid.
 * @param height The height of the mesh grid.
 * @param depth The depth of the mesh grid.
 *
 * @return A pointer to the mesh grid.
 */
mesh_grid_t *mesh_grid_create(int width, int height, int depth);

#endif //C_PHYSICS_MESH_GRID_H
