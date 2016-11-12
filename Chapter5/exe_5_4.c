#include <stdio.h>

int main(void)
{
    float cm = 0;
    int feet = 0;
    float inches = 0;

    printf("Enter a height in centimeters (<=0 to quit): ");
    scanf("%f", &cm);
    while(cm > 0)
    {
        feet = cm / 30.48;
        inches = (cm - feet * 30.48) / 2.54;
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &cm);

    }
    printf("bye!\n");

    return 0;
}
