#include <stdio.h> 

#define HARMONIC_MEAN(X, Y) 1/((1/X)+(1/Y))

int main(void)
{
    double x = 10;
    double y = 5;

    printf("%g\n", HARMONIC_MEAN(x, y));

    return 0;
}
