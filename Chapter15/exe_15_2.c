#include <stdio.h>
#include <string.h>

int str_num(const char *);
char * itobs(int, char *);

int main(int argc, char *argv[])
{
    int num1 = str_num(argv[1]);
    int num2 = str_num(argv[2]);
    char ret[81];

    printf("~%s = %s\n", argv[1], itobs(~num1, ret));
    printf("~%s = %s\n", argv[2], itobs(~num2, ret));
    printf("%s & %s = %s\n", argv[1], argv[2], itobs(num1&num2, ret));
    printf("%s | %s = %s\n", argv[1], argv[2], itobs(num1|num2, ret));
    printf("%s ^ %s = %s\n", argv[1], argv[2], itobs(num1^num2, ret));

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

char * itobs(int n, char *ps)
{
    int i;
    static int size = 8 * sizeof(int);

    for(i = size-1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';

    return ps;
}
