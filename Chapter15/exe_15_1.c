#include <stdio.h>
#include <string.h>

int str_num(const char *str);

int main(void)
{
    char *pbin = "01001001";

    printf("%s = %d\n", pbin, str_num(pbin));

    return 0;
}

int str_num(const char *str)
{
    int len = strlen(str) - 1;
    int result = 0;
    int i;

    for(i = len; i >= 0; i--)
    {
        result += (str[i]-'0') << (len-i);
    }

    return result;
}
