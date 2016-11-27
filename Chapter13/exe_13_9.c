#include <stdio.h>
#include <stdlib.h>

#define MAX 81

int main(void)
{
    FILE *fp;
    char words[MAX];

    if((fp = fopen("words", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"words\" file.\n");
        exit(1);
    }

    rewind(fp);
    int count = 0;

    while(fgets(words, MAX-1, fp) != NULL)
        count++;

    puts("Enter words to add to the file; press the Enter ");
    puts("key at the beginning of a line to terminate.");
    while(gets(words) != NULL && words[0] != '\0')
        fprintf(fp, "%d: %s\n", count++, words);
    puts("File contents:");
    rewind(fp);
    while(fgets(words, MAX-1, fp) != NULL)
        fputs(words, stdout);
    if(fclose(fp) != 0)
        fprintf(stderr, "Error closing file.\n");

    return 0;
}
