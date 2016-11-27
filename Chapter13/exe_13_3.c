#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SLEN 81

int main(void)
{
    char source_file[SLEN];
    char dest_file[SLEN];
    FILE *fs, *fd;
    char ch;

    printf("Input the name of source file: ");
    scanf("%s", source_file);
    if((fs = fopen(source_file, "r")) == NULL)
    {
        printf("Can't open file %s.\n", source_file);
        exit(1);
    }
    printf("Input the name of destination file: ");
    scanf("%s", dest_file);
    if((fd = fopen(dest_file, "w")) == NULL)
    {
        printf("Can't creat output file %s.\n", dest_file);
        exit(-1);
    }

    while((ch = getc(fs)) != EOF)
    {
        ch = toupper(ch);
        putc(ch, fd);
    }

    fclose(fs);
    fclose(fd);
    fprintf(stdout, "Done.\n");

    return 0;
}
