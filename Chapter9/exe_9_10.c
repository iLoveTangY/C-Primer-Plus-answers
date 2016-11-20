#include <stdio.h>

int Fibonacci(int n);

int main(void)
{
    int n;
    printf("Enter a n: ");
    scanf("%d", &n);

    printf("The Fabonacci %dth: %d\n", n, Fibonacci(n));

    return 0;
}

int Fibonacci(int n)
{
    int ret;
    int f1 = 1;
    int f2 = 1;
    int i;

    if (n == 2 || n == 1)
        return 1;
    for(i = 3; i <= n; i++)
    {
        ret = f1 + f2;
        f1 = f2;
        f2 = ret;
    }

    return ret;
}
