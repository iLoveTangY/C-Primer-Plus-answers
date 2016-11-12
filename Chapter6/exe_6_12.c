#include <stdio.h>

#define SIZE 8

int pow(int x, int n);

int main(void)
{
    int nums[SIZE];

    int i;
    for(i = 0; i < SIZE; i++)
        nums[i] = pow(2, i+1);

    i = 0;
    do
    {
        printf("%d ", nums[i]);
        i++;
    } while(i < SIZE);
    printf("\n");

    return 0;
}

int pow(int x, int n)
{
    int result = x;
    int i;

    for(i = 1; i < n; i++)
        result *= x;

    return result;
}
