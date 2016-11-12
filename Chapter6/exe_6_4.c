#include <stdio.h>

int main(void)
{
    char c;
    c = getchar();

    int len = c - 'A' + 1;
    int i, j;

    for(i = 0; i < len; i++)
    {
        for(j = 0; j < len-1-i; j++)
            printf(" ");
        for(j = 0; j <= i; j++)
            printf("%c", 'A'+j);
        for(j -= 2; j >= 0; j--)
            printf("%c", 'A'+j);
        printf("\n");
    }

    return 0;
}
