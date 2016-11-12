#include <stdio.h>

int main(void)
{
    char word[30];

    printf("Enter a word: ");
    scanf("%s", word);
    int len = strlen(word);
    int i;
    for(i = len-1; i >= 0; i--)
        putchar(word[i]);
    printf("\n");

    return 0;
}
