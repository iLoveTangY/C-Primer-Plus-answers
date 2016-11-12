#include <stdio.h>

double cal(double d1, double d2)
{
    return (d1 - d2) / (d1 * d2);
}

int main(void)
{
    double d1, d2;

    while((scanf("%lf", &d1)) != 0 && (scanf("%lf", &d2)) != 0)
    {
        printf("(%lf-%lf)/(%lf*%lf) = %lf\n", d1, d2, d1, d2, cal(d1, d2));
    }

    return 0;
}
