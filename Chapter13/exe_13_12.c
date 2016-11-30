#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *gray = "M80V1;:*-. ";
    int index = 0;
    char ch;

    FILE *fp, *fn;

    fp = fopen("2.txt", "r");
    fn = fopen("image.txt", "w");
    if(fp == NULL)
    {
        fprintf(stderr, "Can't open file \"data.dat\"!!\n");
        exit(1);
    }
    while((ch = getc(fp)) != EOF)
    {
        if(ch == '\n')
        {
            //putchar(ch);
            putc(ch, fn);
            continue;
        }
        index = ch - '0';
        if(index >= 0 && index <= 9)
        {
           // putchar(gray[index]);
            putc(gray[index], fn);
        }
    }

    return 0;
}
