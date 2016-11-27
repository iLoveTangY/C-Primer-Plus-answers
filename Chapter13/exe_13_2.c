#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024

int main(int argc, char *argv[])
{
    FILE *fs, *ft;
    char ch;

    if(argc != 3)
    {
        printf("Usage: %s filename filename\n", argv[0]);
        exit(1);
    }

    if((fs = fopen(argv[1], "rb")) == NULL || (ft = fopen(argv[2], "wb")) == NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }

    if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0 || setvbuf(ft, NULL, _IOFBF, BUFSIZE) != 0)
    {
        printf("Can't creat buffer.\n");
        exit(1);
    }

    char temp[BUFSIZE];
    size_t bytes;

    while((bytes = fread(temp, sizeof(char), BUFSIZE, fs)) > 0)
        fwrite(temp, sizeof(char), bytes, ft);

    fclose(fs);
    fclose(ft);

    return 0;
}
