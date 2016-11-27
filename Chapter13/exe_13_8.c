#include <stdio.h>
#include <stdlib.h>

int count(FILE *fp, char ch);

int main(int argc, char *argv[])
{
    int i;
    FILE *fp;

    if(argc < 2)
    {
        printf("No character.\n");
        exit(1);
    }
    char ch = argv[1][0];
    if(argc == 2)
    {
        printf("Please input:\n");
        printf("In your input %c has been appeared %d times.\n", ch, count(stdin, ch));
    }
    else
    {
        i = 2;
        while(i < argc)
        {
            if((fp = fopen(argv[i], "r")) == NULL)
            {
                printf("Can't open file %s.\n", argv[i]);
                i++;
                continue;
            }
            printf("In %s %c has been appeared %d times.\n", argv[i], ch, count(fp, ch));
            fclose(fp);
            i++;
        }
    }

    return 0;
}

int count(FILE *fp, char ch)
{
    int cnt = 0;
    char ch1;

    while((ch1 = getc(fp)) != EOF)
        if(ch1 == ch)
            cnt++;

    return cnt;
}
