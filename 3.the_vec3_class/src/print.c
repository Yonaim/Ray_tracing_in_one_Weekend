#include "print.h"

// 범위가 [0,1]인 rgb 값을 범위 [0,255]에 맵핑 해서 stdout으로 출력한다
void    write_color(t_color3 pixel_color)
{
    printf("%d %d %d\n", (int)(255.999 * pixel_color.x),
                        (int)(255.999 * pixel_color.y),
                        (int)(255.999 * pixel_color.z));
}