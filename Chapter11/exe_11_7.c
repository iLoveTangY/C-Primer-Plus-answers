#include <stdio.h>

#define SIZE 128

char * string_in(char *s1, char *s2)
{
    char *addr = NULL;

    int i, j;
    for(i = 0; i < strlen(s1); i++)
    {
        if(*(s1+i) == *s2)
        {
            addr = s1 + i;
            for(j = 1; j < strlen(s2); j++)
                if(*(s1+i+j) != *(s2+j))
                    break;
            if(j == strlen(s2))
                return addr;
        }
    }

    return addr;
}
int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    int n;
    char ch;
    while(1)
    {
        puts("Enter S1:");
        gets(s1);
        printf("Enter S2:\n");
        gets(s2);
        if(string_in(s1, s2) != NULL)
            printf("'%s' in '%s'.\n", s2, s1);
        else
            printf("'%s' not in '%s'.\n", s2, s1);
        printf("q to quit(other to go on):");
        ch = getchar();
        getchar();
        if(ch == 'q')
            break;
    }

    return 0;
}
