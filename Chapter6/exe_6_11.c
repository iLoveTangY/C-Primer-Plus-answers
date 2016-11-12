#include <stdio.h>

int main(void)
{
    int count = 0;

    printf("Enter a count: ");
    scanf("%d", &count);

    int i;
    double sum1 = 0.0;
    double sum2 = 0.0;
    int n;
    for(i = 1; i <= count; i++)
    {
        sum1 += (1.0 / i);
        if(i % 2 != 0)
            n = 1;
        else 
            n = -1;
        sum2 += ((-1) * n * 1.0 / i);
    }

    printf("The first sequence equals to %lf\n", sum1);
    printf("The second sequence equals to %lf\n", sum2);

    return 0;
}
