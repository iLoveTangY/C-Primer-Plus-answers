#include <stdio.h>
#include <math.h>

#define PI 4*atan(1)

typedef struct rect_v
{
    double x;
    double y;
}Rect_V;

Rect_V polar_to_rect(double, double);

int main(void)
{
    double len, angle;

    printf("Enter number of lengeth and angle: ");
    scanf("%lf %lf", &len, &angle);

    Rect_V rect = polar_to_rect(len, angle);

    printf("x = %g, y = %g\n", rect.x, rect.y);

    return 0;
}

Rect_V polar_to_rect(double len, double angle)
{
    Rect_V ret;

    ret.x = len * cos(PI * angle/360);
    ret.y = len * sin(PI * angle/360);

    return ret;
}
