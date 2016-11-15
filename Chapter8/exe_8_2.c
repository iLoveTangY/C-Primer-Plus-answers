#include <stdio.h>

int main(void)
{
    int cnt = 0;
    char ch;

    while((ch = getchar()) != EOF)
    {
        if(ch >= ' ' || ch == '\n' || ch == '\t')
            printf("%5c", ch);
        else
            printf("^%4c", ch+64);

        printf("%5d", ch);
        cnt++;

        if(cnt % 8 == 0)
            printf("\n");
    }

    return 0;
}
