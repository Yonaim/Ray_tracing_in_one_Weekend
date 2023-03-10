#ifndef TRACE_H
# define TRACE_H

# include "structs.h"
# include "vec3_utils.h"

t_ray       ray(t_point3 orig, t_vec3 dir);
t_point3    ray_at(t_ray *ray, double t);

#endif