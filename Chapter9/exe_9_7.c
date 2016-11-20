#include <stdio.h>

double power(double n, int p);

int main(void)
{
    printf("Enter n and p:");
    double n;
    int p;

    scanf("%lf %d", &n, &p);
    printf("%lf ^ %d = %lf\n", n, p, power(n, p));

    return 0;
}

double power_func(double n, int p)
{
    double pow = 1;
    int i;

    for(i = 1; i <= p; i++)
        pow *= n;
    return pow;
}

double power(double n, int p)
{
    if (n == 0)
        return 1;
    if (p == 0)
        return 1;
    else if(p > 0)
        return power_func(n, p);
    else
        return 1/power_func(n, -p);
}
