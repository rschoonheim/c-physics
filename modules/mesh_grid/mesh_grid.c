#include "mesh_grid.h"
#include "stdlib.h"

/** @inheritDoc */
mesh_grid_t *mesh_grid_create(int width, int height, int depth) {
    mesh_grid_t *mesh_grid = malloc(sizeof(mesh_grid_t));

    mesh_grid->width = width;
    mesh_grid->height = height;
    mesh_grid->depth = depth;

    return mesh_grid;
}
