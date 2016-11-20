#include <stdio.h>
#include <ctype.h>

int is_alpha(char ch);

int main (void)
{
    char ch;
    int ret;

    while((ch = getchar()) != EOF)
    {
        ret = is_alpha(ch);
        if(ret != -1)
            printf("%c: %d\n", ch, ret);
        else
            printf("%c not a alphabet.\n", ch);
    }

    return 0;
}

int is_alpha(char ch)
{
    if(isalpha(ch))
        return tolower(ch) - 'a' + 1;
    else
        return -1;
}
