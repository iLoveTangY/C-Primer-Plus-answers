#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Please input a number: ");
    scanf("%d", &num);

    int i = 0;
    for(i = 0; i <= 10; i++)
        printf("%d ", num+i);
    printf("\n");

    return 0;
}
