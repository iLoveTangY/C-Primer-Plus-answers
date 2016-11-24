#include <stdio.h>

#define SIZE 128

void my_strncpy(char *s1, char *s2, int n)
{
    int i = 0;

    for(i = 0; i < n; i++)
    {
        if(*(s2+i) == '\0')
            break;
        *(s1+i) = *(s2+i);
    }
    int cnt = i;

    for(; i < n; i++)
    {
        if(i == cnt)
            *(s1+i) = '\0';
        else
        {
            *(s1+i) = ' ';
            *(s1+i+1) = '\0';
        }
    }
}

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    int n;
    char ch;
    while(1)
    {
        puts("Enter S2:");
        gets(s2);
        printf("Enter n: ");
        scanf("%d", &n);
        getchar();
        my_strncpy(s1, s2, n);
        puts("S1:");
        puts(s1);
        printf("q to quit(other to go on):");
        ch = getchar();
        getchar();
        if(ch == 'q')
            break;
    }

    return 0;
}
