#include <stdio.h>

void Temperatures(double fah);

int main(void)
{
    double fah = 0;

    printf("Enter a fahrenheit(q to quit) : ");
    while((scanf("%lf", &fah)) != 0)
    {
        Temperatures(fah);
        printf("Enter a fahrenheit(q to quit) : ");
    }

    return 0;
}

void Temperatures(double fah)
{
    const double k = 1.8;
    const double b = 32.0;
    const double abszero = 273.16;

    double cel = k * fah + b;
    double kel = cel + abszero;

    printf("%.2lfF = %.2lfC = %.2lfK\n", fah, cel, kel);
}
