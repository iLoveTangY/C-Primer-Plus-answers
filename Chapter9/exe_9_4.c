#include <stdio.h>

double func(double x, double y);

int main(void)
{
    printf("%lf\n", func(3.5, 2.6));

    return 0;
}

double func(double x, double y)
{
    double ret;

    ret = 1 / ((1/x + 1/y) / 2);

    return ret;
}
