#include <stdio.h>

#define SIZE 128

void reverse(char *str);

int main(void)
{
    char s1[SIZE];
    char ch;
    while(1)
    {
        puts("Enter a string:");
        gets(s1);
        reverse(s1);
        puts("After reverse:");
        puts(s1);
        printf("q to quit(other to go on):");
        ch = getchar();
        getchar();
        if(ch == 'q')
            break;
    }

    return 0;
}

void reverse(char *str)
{
    size_t size = strlen(str);

    int i, j;
    char ch;

    for(i = 0, j = size-1; i < j; i++, j--)
    {
        ch = *(str+i);
        *(str+i) = *(str+j);
        *(str+j) = ch;
    }
}
