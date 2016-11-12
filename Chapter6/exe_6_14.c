#include <stdio.h>

int main(void)
{
    char line[256];

    int i;
    scanf("%c", &line[0]);
    for(i = 0; line[i] != '\n';)
        scanf("%c", &line[++i]);
    
    for(i--; i >= 0; i--)
        putchar(line[i]);

    printf("\n");

    return 0;
}
