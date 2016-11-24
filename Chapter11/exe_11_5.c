#include <stdio.h>

#define SIZE 128

int is_within(char ch, char *str);

int main(void)
{
    char str[SIZE];
    char ch;
    while(1)
    {
        puts("Enter a String:");
        gets(str);
        printf("Enter the match char:");
        ch = getchar();
        getchar();
        if(is_within(ch, str))
            printf("'%c' in %s\n", ch, str);
        else
            printf("'%c' not in %s\n", ch, str);
        printf("q to quit(other to go on):");
        ch = getchar();
        getchar();
        if(ch == 'q')
            break;
    }

    return 0;
}

int is_within(char ch, char *str)
{
    int i = 0;

    for(i = 0; *(str+i) != '\0'; i++)
        if(ch == *(str+i))
            return 1;

    return 0;
}
