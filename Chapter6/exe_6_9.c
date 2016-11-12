#include <stdio.h>

int calc(int lower, int upper);

int main(void)
{
    int lower = 0;
    int upper = 0;

    printf("Enter lower and upper  intger limits: ");
    scanf("%d %d", &lower, &upper);

    while(lower < upper)
    {
        printf("The sums of the squares from %d to %d is %d\n", lower*lower, upper*upper, calc(lower, upper));
        printf("Enter next set of limits: ");
        scanf("%d %d", &lower, &upper);
    }

    printf("Done\n");

    return 0;
}

int calc(int lower, int upper)
{
    int sum = 0;

    int i;
    for(i = lower; i <= upper; i++)
        sum += (i * i);

    return sum;
}
