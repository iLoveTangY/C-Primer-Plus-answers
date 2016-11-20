#include <stdio.h>

void to_base_n(unsigned long n, int base);

int main(void)
{
    unsigned long n;
    int base;
    printf("Enter a number and a base: ");
    scanf("%u %d", &n, &base);

    to_base_n(n, base);
    printf("\n");

    return 0;
}

void to_base_n(unsigned long n, int base)
{
    int r;
    r = n % base;
    if (n >= base)
        to_base_n(n / base, base);
    putchar('0' + r);

    return;
}
