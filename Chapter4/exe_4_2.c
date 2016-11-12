#include <stdio.h>

int main(void)
{
    char name[20];

    gets(name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    int width = strlen(name)+3;
    printf("%*s\n", width, name);

    return 0;
}
