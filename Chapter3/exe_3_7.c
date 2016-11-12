#include <stdio.h>

int main(void)
{
    float height = 0;

    printf("Please input your height: ");
    scanf("%f", &height);
    printf("You are %f centmeters.\n", height * 2.54);

    return 0;
}
