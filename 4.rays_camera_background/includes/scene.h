#ifndef SCENE_H
# define SCENE_H

# include "structs.h"
# include "vec3_utils.h"

t_canvas    canvas(int  width, int height);
t_camera    camera(t_canvas *canvas, t_point3 origin);

#endif