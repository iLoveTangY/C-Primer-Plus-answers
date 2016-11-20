#include <stdio.h>

double min(double x, double y);

int main(void)
{
    double x, y;

    printf("Enter two double integer:");
    scanf("%lf %lf", &x, &y);
    printf("min = %lf\n", min(x, y));

    return 0;
}

double min(double x, double y)
{
    return x>y ? y:x;
}
