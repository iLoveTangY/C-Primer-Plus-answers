#include <stdio.h>
#include <ctype.h>
#include <math.h>

double str_to_dou(char *str)
{
    int isNe = 0;
    double ret = 0;
    int i = 0;
    if(str[0] == '-')
    {
        isNe = 1;
        i++;
    }

    char ch;
    double coe = 0.1;
    int isDec = 0;

    while(*(str+i) != '\0')
    {
        ch = *(str+i);
        if(!isDec)
        {
            if(isdigit(ch))
                ret = ret * 10 + ch - '0';
            else if(ch == '.')
                isDec = 1;
            else
                break;
        }
        else
        {
            ret = ret + (ch - '0') * coe; 
            coe *= coe;
        }

        i++;
    }

    return ret;
}

int main(int argc, char *argv[])
{
    if(argc < 3)
        printf("Too few arguments\n");

    double bn = str_to_dou(argv[1]);
    int exp = (int)str_to_dou(argv[2]);

    printf("%.2lf ^ %d = %.2lf\n", bn, exp, pow(bn, exp));

    return 0;
}
