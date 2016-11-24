#include <stdio.h>

void input(char *str, int n);

int main(void)
{
    printf("Enter the numbers of your string: ");
    int n;
    scanf("%d", &n);
    getchar();
    char str[128];
    input(str, n);
    puts(str);

    return 0;
}

void input(char *str, int n)
{
    int i;
    for(i = 0; i < n; i++)
        *(str + i) = getchar();
    *(str + i) = '\0';
}
