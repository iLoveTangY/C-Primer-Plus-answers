#include <stdio.h>

char get_first(void)
{
    int ch;

    while((ch = getchar()) == ' ')
        continue;
    while(getchar() != '\n')
        continue;

    return ch;
}

int main(void)
{
    char ch;

    while((ch = get_first()) != EOF)
        putchar(ch);

    printf("\n");

    return 0;
}
