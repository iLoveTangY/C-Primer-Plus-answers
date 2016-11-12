#include <stdio.h>

#define LITRE_PER_GALLON 3.785
#define KM_PER_MILE 1.609

int main(void)
{
    float miles = 0;
    float gallons = 0;

    printf("Please input miles and gallons: ");
    scanf("%f %f", &miles, &gallons);
    float miles_per_gallon = miles / gallons;
    printf("%.1f miles per gallon.\n", miles_per_gallon);
    printf("%1.f litre per 100km.\n", 100 * KM_PER_MILE * gallons / (miles * LITRE_PER_GALLON));

    return 0;
}
