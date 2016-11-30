#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 128

int main(int argc, char *argv[])
{
    FILE *fp;
    int row, col;
    char line[MAXLINE];

    if(argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(1);
    }

    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open the file.\n");
        exit(1);
    }
    printf("Please input the row and column: ");
    scanf("%d %d", &row, &col);

    row--;
    while(row--)
        fgets(line, MAXLINE-1, fp);
    
    fseek(fp, col, SEEK_CUR);

    fgets(line, MAXLINE-1, fp);
    fputs(line, stdout);

    fclose(fp);

    return 0;
}
