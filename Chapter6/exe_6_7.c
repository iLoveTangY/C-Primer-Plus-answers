#include <stdio.h>

int main(void)
{
    double d1, d2;

    while((scanf("%lf", &d1)) != 0 && (scanf("%lf", &d2)) != 0)
    {
        printf("(%.3lf-%.3lf)/(%.3lf*%.3lf) = %.3lf\n", d1, d2, d1, d2, (d1-d2)/(d1*d2));
    }

    return 0;
}
