#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    chline('$', 3, 5);

    return 0;
}

void chline(char ch, int i, int j)
{
    int m, n;

    for(m = 1; m < i; m++)
        printf(" ");
    for(m--; m < j; m++)
        printf("%c", ch);

    printf("\n");

    return;
}
