#include <stdio.h>

int is_one(int, int);

int main(void)
{
    int num = 4;
    int n = 3;

    printf("%d\n", is_one(num, n));

    return 0;
}

int is_one(int num, int n)
{
    return (num >> (n-1)) & 1;
}
