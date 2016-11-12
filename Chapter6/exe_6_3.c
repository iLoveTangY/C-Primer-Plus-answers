#include <stdio.h>

int main(void)
{
    char f = 'F';

    int i;
    int j;
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j <= i; j++)
            printf("%c", f-j);
        printf("\n");
    }

    return 0;
}
