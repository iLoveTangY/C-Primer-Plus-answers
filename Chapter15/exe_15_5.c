#include <stdio.h>
#include <limits.h>

int rotate_1(unsigned int , int);

int main(void)
{
    printf("%d\n", rotate_1(1, 30));

    return 0;
}

int rotate_1(unsigned int x, int n)
{
    return (((INT_MAX << n) & x) >> n) | (x << n);
}
