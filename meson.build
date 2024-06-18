project('c-physics', 'c',
        version : '1.0.0',
        default_options : ['warning_level=3', 'c_std=c2x'])

# C Compiler
#
c_compiler = meson.get_compiler('c')


# Define dependencies
#
open_gl = dependency('opengl')
glfw = dependency('glfw3')
glu = dependency('glu')
libm = c_compiler.find_library('m', required : false)


c_physics = executable(
    'c_physics',
    'main.c',
    'modules/open_gl/open_gl.h',
    'modules/open_gl/open_gl.c',
    'modules/mesh_grid/mesh_grid.h',
    'modules/mesh_grid/mesh_grid.c',
    install : true,
    dependencies : [open_gl, glfw, glu, libm],
)

test('test', c_physics)