#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int i = 1;
    char ch;

    while(i < argc)
    {
        if((fp = fopen(argv[i], "r")) == NULL)
        {
            printf("Can't open file %s.\n", argv[i]);
            exit(1);
        }
        printf("--%s--: \n\n", argv[i]);
        while((ch = getc(fp)) != EOF)
            putchar(ch);

        printf("\n");

        i++;
    }

    return 0;
}
