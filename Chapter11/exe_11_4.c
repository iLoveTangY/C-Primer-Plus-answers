#include <stdio.h>

#define SIZE 128

char * my_strchr(char *str, char ch);

int main(void)
{
    char str[SIZE];

    puts("Enter a string:");
    gets(str);
    puts("Enter match char:");
    char ch = getchar();

    char *index;
    index = my_strchr(str, ch);
    if(index)
    {
        printf("Find!\n%c\n", *index);
    }
    else
        puts("Cannot find!");

    return 0;
}

char * my_strchr(char *str, char ch)
{
    int i = 0;

    while(*(str + (i++)) != '\0')
        if(*(str+i) == ch)
            return (str+i);

    return NULL;
}
