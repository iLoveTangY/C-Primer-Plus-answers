#include <stdio.h>

int critic(void);

int main(void)
{
    int units;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while(units != 56)
        units = critic();

    printf("You must have look it up!\n");

    return 0;
}

int critic(void)
{
    int units;

    printf("No luck, chummy. Try again.\n");
    scanf("%d", &units);

    return units;
}
