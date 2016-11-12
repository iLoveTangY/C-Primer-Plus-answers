#include <stdio.h>

int main(void)
{
    float f = 0;
    scanf("%f", &f);
    printf("The input is %f or %e.\n", f, f);
    printf("The input is %+f or %E.\n", f, f);

    return 0;
}
