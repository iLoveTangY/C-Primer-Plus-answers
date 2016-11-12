#include <stdio.h>

int main(void)
{
    char ch;
    int a = 0, b = 0;

    while((ch = getchar()) != '#')
    {
        if(ch == '.')
        {
            putchar('!');
            a++;
        }
        else if(ch == '!')
        {
            putchar('!');
            putchar('!');
            b++;
        }
        else
            putchar(ch);
    }
    
    printf("\nThe times of '.' replaced by '!': %d\n", a);
    printf("The times of '.' repalced by '!!': %d\n", b);

    return 0;
}
