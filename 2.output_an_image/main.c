#include <stdio.h>
#include <fcntl.h>

#define IMAGE_WIDTH     256
#define IMAGE_HEIGHT    256

int main()
{
    double r, g, b;

    printf("P3\n");
    // 아스키코드로 표현한 RGB를 통해 이미지를 표현함
    printf("%d %d\n", IMAGE_WIDTH, IMAGE_HEIGHT);
    // 가로와 세로의 픽셀 수
    printf("255\n");
    // R,G,B 각 색의 최대값

// 0부터 1사이의 실수로 매핑하여 색상값을 구한 뒤, 다시 0부터 255 사이의 정수로 변환하여 출력
// 0~1로 매핑하는 이유?
    // 1. 벡터 연산의 용이함
    // 2. 물리학적인 의미를 고려했을 때 [0, 1]로 매핑하는 것이 더 적합함
    for (int i = IMAGE_HEIGHT - 1; i >= 0; i--)
    {
        for (int j = 0; j < IMAGE_WIDTH; j++)
        {
            r = (double)j / (IMAGE_WIDTH);
            g = (double)i / (IMAGE_HEIGHT);
            b = 0.25;
// 255가 아닌 255.999를 곱하는 이유?
    // 색상이 1에 가까운 값일 때 가장 높은 색인 255로 찍히게 하기 위해 보정
    // (곱 연산 후 정수형으로 변환하므로 소수점 이후가 절삭되기 때문에, 좀더 높은 값이 나오도록 보정이 필요함)
    // 각 색의 최대값은 255이므로, 256이면 안됨
            printf("%d %d %d\n", (int)(255.999 * r), (int)(255.999 * g), (int)(255.999 * b));
        }
    }
    return (0);
}