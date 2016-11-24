#include <stdio.h>

#define SIZE 128

void del_space(char *str);

int main(void)
{
    char input[SIZE];
    
    while(gets(input) && input[0] != '\0')
    {
        del_space(input);
        puts(input);
    }

    return 0;
}

void del_space(char *str)
{
    int i = 0;
    int space_cnt = 0;
    
    while(*(str+i) != '\0')
    {
        if(*(str+i) == ' ')
        {
            space_cnt++;
            int j = i + 1;
            while(*(str+j) != '\0')
            {
                if(*(str+j) != ' ')
                    *(str+j-space_cnt) = *(str+j);
                else
                    space_cnt++;
                j++;
            }
        }
        i++;
    }

    int len = strlen(str);
    *(str+len-space_cnt) = '\0';
}
