#include <stdio.h>

int main(void)
{
    char ch;
    int space = 0;
    int change_line = 0;
    int other = 0;

    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
            space++;
        else if(ch == '\n')
            change_line++;
        else
            other++;
    }

    printf("space = %d, new line = %d, other = %d\n", space, change_line, other);

    return 0;
}
