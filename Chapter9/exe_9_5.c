#include <stdio.h>

void larger_of(double *x, double *y);

int main(void)
{
    double x = 5.6;
    double y = 4.3;
    larger_of(&x, &y);
    printf("%lf %lf\n", x, y);

    return 0;
}

void larger_of(double *x, double *y)
{
    *x = *y = *x > *y ? *x : *y;
}
