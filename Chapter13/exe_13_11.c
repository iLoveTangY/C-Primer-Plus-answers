#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 128

int main(int argc, char *argv[])
{
    FILE *fp;
    char line[MAXLINE];

    if(argc != 3)
    {
        printf("Usage: %s string filename\n", argv[0]);
        exit(1);
    }

    if((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }

    while(fgets(line, MAXLINE, fp) != NULL)
    {
        if(strstr(line, argv[1]) != NULL)
            fputs(line, stdout);
    }

    fclose(fp);

    return 0;
}
