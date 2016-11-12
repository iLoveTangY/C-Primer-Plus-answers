#include <stdio.h>

int main(void)
{
    int count = 0;
    char ch;

    while((ch = getchar()) != '#')
    {
        if(count++ % 8 == 0)
            printf("\n");
        printf("%c: %3d   ", ch, ch);
    }

    printf("\n");

    return 0;
}
