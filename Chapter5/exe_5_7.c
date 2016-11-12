#include <stdio.h>

float cube(float x)
{
    return x * x * x;
}

int main(void)
{
    float x = 0;
    printf("Enter a number: ");
    scanf("%f", &x);

    printf("x^3 = %f\n", cube(x));

    return 0;
}
