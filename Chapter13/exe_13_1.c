#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fp;
    char file_name[128];
    long count = 0;

    printf("Please input the file name: ");
    scanf("%s", file_name);

    if((fp = fopen(file_name, "r")) == NULL)
    {
        printf("Cannot open %s\n", file_name);
        exit(1);
    }

    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %ld characters.\n", file_name, count);

    return 0;
}
