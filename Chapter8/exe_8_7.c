#include <stdio.h>

#define MULTIPLE 1.5
#define BASE_TIME 40
#define BASE_MONEY1 300
#define BASE_MONEY2 150

#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

char get_first(void);
void eat_line(void);

int main(void)
{
    int hours = 0;
    int opt;
    double mph;
    while(1)
    {
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("a) $8.75/hr                     b) $9.33/hr\n");
        printf("c) $10.00/hr                    d) $11.20/hr\n");
        printf("q) quit\n");
        printf("*****************************************************************\n");
        switch(opt = get_first())
        {
            case 'a':
                mph = 8.75;
                break;
            case 'b':
                mph = 9.33;
                break;
            case 'c':
                mph = 10.00;
                break;
            case 'd':
                mph = 11.20;
                break;
            case 'q':
                return 1;
            default:
                continue;
                break;
        }
        printf("Enter the hours:");
        scanf("%d", &hours);
        eat_line();

        if(hours > BASE_TIME)
            hours = BASE_TIME + (hours-BASE_TIME) * MULTIPLE;
        int money = hours * mph;
        double taxs = 0;

        if(money > BASE_MONEY2 + BASE_MONEY1)
            taxs = BASE_MONEY1 * RATE1 + BASE_MONEY2 * RATE2 + (money-BASE_MONEY1-BASE_MONEY2) * RATE3;
        else if(money > BASE_MONEY1)
            taxs = BASE_MONEY1 * RATE1 + (money-BASE_MONEY1) * RATE2;
        else
            taxs = 1.0 * money * RATE1;

        printf("wages = %d, taxs = %lf, profit = %lf\n", money, taxs, money-taxs);
    }

    return 0;
}

char get_first(void)
{
    int ch;

    ch = getchar();
    eat_line();
    
    return ch;
}

void eat_line(void)
{
    while(getchar() != '\n')
        continue;
}
