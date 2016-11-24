#include <stdio.h>

#define SIZE 128

void get_word(char *str);

int main(void)
{
    char str[SIZE];

    get_word(str);

    puts(str);

    return 0;
}

void get_word(char *str)
{
    int i = 0;

    char ch;
    ch = getchar();

    while(ch == ' ' || ch == '\n' || ch == '\t')
        ch = getchar();
    *(str + i) = ch;

    for(i = 1; i < SIZE; i++)
    {
        ch = getchar();
        *(str + i) = ch;
        if(ch == ' ' || ch == '\n' || ch == '\t')
            break;
    }

    *(str + i) = '\0';
}
