#include <stdio.h>
#include <stdlib.h>

#define SLEN 81
#define MAXLINE 1024

int main(void)
{
    FILE *f1, *f2;
    char first_file[SLEN];
    char second_file[SLEN];
    char line1[MAXLINE];
    char line2[MAXLINE];

    printf("Enter two file: ");
    scanf("%s %s", first_file, second_file);

    if((f1 = fopen(first_file, "r")) == NULL)
    {
        printf("Can't open file %s.\n", first_file);
        exit(1);
    }
    if((f2 = fopen(second_file, "r")) == NULL)
    {
        printf("Can't open file %s.\n", second_file);
        exit(1);
    }

    int sta1, sta2;
    while(1)
    {
        if((sta1 = fgets(line1, MAXLINE, f1)) != NULL)
            fputs(line1, stdout);
        if((sta2 = fgets(line2, MAXLINE, f2)) != NULL)
            fputs(line2, stdout);
        if(sta1 == NULL && sta2 == NULL)
            break;
    }

    return 0;
}
