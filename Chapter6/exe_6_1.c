#include <stdio.h>

int main(void)
{
    int al[26];

    int i;
    for(i = 0; i < 26; i++)
        al[i] = 'a' + i;

    for(i = 0; i < 26; i++)
        printf("%c ", al[i]);

    printf("\n");

    return 0;
}
