#include <stdio.h>

int main(void)
{
    int limit = 0;
    printf("Enter a number: ");
    scanf("%d", &limit);

    int count = 0;
    int sum = 0;
    while(count++ < limit)
        sum += count;

    printf("sum = %d\n", sum);

    return 0;
}
