#include <stdio.h>

int main(void)
{
    int quart = 0;

    printf("Please input the numbers of quart: ");
    scanf("%d", &quart);
    printf("%d quarts have %ld molecules.\n", quart, quart*950/3E-23);

    return 0;
}
