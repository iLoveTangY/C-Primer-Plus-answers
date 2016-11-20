#include <stdio.h>

void func(char ch, int i, int j);

int main(void)
{
    func('#', 4, 5);

    return 0;
}

void func(char ch, int i, int j)
{
    int m, n;

    for(m = 0; m < j; m++)
    {
        for(n = 0; n < i; n++)
            printf("%c", ch);
        printf("\n");
    }
}
