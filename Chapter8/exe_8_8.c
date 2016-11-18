#include <stdio.h>

char get_choice(void);
float get_number(void);
void eat_line(void);
void add_func(void);
void sub_func(void);
void mul_func(void);
void div_func(void);

int main(void)
{
    char opt;

    while(1)
    {
        printf("-------------------------------------\n");
        printf("Enter the operation of your choice:\n");
        printf("a. add        s. subtract\n");
        printf("m. multiply   d. divide\n");
        printf("q. quit\n");
        printf("-------------------------------------\n");

        opt = get_choice();
        if(opt == 'q')
            break;
        switch(opt)
        {
            case 'a':
                add_func();
                break;
            case 's':
                sub_func();
                break;
            case 'm':
                mul_func();
                break;
            case 'd':
                div_func();
                break;
            default:
                break;
        }
    }

    printf("Bye.\n");

    return 0;
}

char get_choice(void)
{
    char ch;

    ch = getchar();
    while(getchar() != '\n')
        continue;

    return ch;
}

void add_func(void)
{
    float first, second;
    printf("Enter first number:");
    first = get_number();
    printf("Enter second number:");
    second = get_number();

    printf("%.2f + %.2f = %.2f\n", first, second, first + second);
}

void sub_func(void)
{
    float first, second;
    printf("Enter first number:");
    first = get_number();
    printf("Enter second number:");
    second = get_number();
    
    printf("%.2f - %.2f = %.2f\n", first, second, first - second);
}

void mul_func(void)
{
    float first, second;
    printf("Enter first number:");
    first = get_number();
    printf("Enter second number:");
    second = get_number();
    
    printf("%.2f * %.2f = %.2f\n", first, second, first*second);
}
 
void div_func(void)
{
    float first, second;
    char str[20];
    printf("Enter first number:");
    first = get_number();
    printf("Enter second number:");
    second = get_number();
    while(fabs(second) < 1E-8)
    {
        printf("Enter a number other than 0:");
        second = get_number();
    }
    printf("%.2f / %.2f = %.2f\n", first, second, first/second);
}
 
float get_number(void)
{
    float ret;
    char str[20];

    while((scanf("%f", &ret)) != 1)
    {
        gets(str);
        printf("%s is not a number.\n", str);
        printf("Please Enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    eat_line();

    return ret;
}

void eat_line(void)
{
    while(getchar() != '\n')
        continue;
}
