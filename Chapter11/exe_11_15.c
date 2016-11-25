#include <stdio.h>
#include <ctype.h>

int main(int argv, char *argc[])
{
    int toUpper = 0;
    int toLower = 0;
    int origin = 1;

    if(argv > 2)
    {
        printf("Arguments error.\n");
        return -1;
    }
    if(argv == 2)
    {
        if(strlen(argc[1]) != 2)
        {
            printf("Arguments error.\n");
            return -1;
        }
        if(argc[1][0] == '-')
        {
            if(argc[1][1] == 'p')
                origin = 1;
            else if(argc[1][1] == 'u')
                toUpper = 1;
            else if(argc[1][1] == 'l')
                toLower = 1;
            else
            {
                printf("Arguments error.\n");
                return -1;
            }
        }
        else
        {
            printf("Arguments error.\n");
            return -1;
        }
    }

    char ch;

    while((ch = getchar()) != EOF)
    {
        if(toUpper)
            putchar(toupper(ch));
        else if(toLower)
            putchar(tolower(ch));
        else
            putchar(ch);
    }

    printf("\n");

    return 0;
}
