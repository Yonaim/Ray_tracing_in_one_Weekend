#include <stdio.h>
#include <fcntl.h>
#include "structs.h"
#include "print.h"
#include "vec3_utils.h"

#define IMAGE_WIDTH     256
#define IMAGE_HEIGHT    256

int main()
{
    double      r, g, b;
    t_color3    pixel_color;
    t_canvas    canv;
    t_camera    cam;
    t_ray       ray;

    //Scene setting;
    canv = canvas(IMAGE_WIDTH, IMAGE_HEIGH);
    cam = camera(&canv, point3(0, 0, 0));

   printf("P3\n%d %d\n255\n", canv.width, canv.height);

    for (int i = IMAGE_HEIGHT - 1; i >= 0; i--)
    {
        for (int j = 0; j < IMAGE_WIDTH; j++)
        {
            pixel_color.x = (double)j / (IMAGE_WIDTH);
            pixel_color.y = (double)i / (IMAGE_HEIGHT);
            pixel_color.z = 0.25;
            // t_color3 test = vec3((double)j / (IMAGE_WIDTH), (double)i / (IMAGE_HEIGHT), 0.25);
            write_color(pixel_color);
        }
    }
    return (0);
}