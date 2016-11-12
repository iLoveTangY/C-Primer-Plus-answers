#include <stdio.h>

#define MULTIPLE 1.5
#define BASE_TIME 40
#define BASE_MONEY1 300
#define BASE_MONEY2 150

#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

int main(void)
{
    int hours = 0;
    printf("Please input your work hours: ");
    scanf("%d", &hours);
    if(hours > BASE_TIME)
        hours = BASE_TIME + (hours-BASE_TIME) * MULTIPLE;
    int money = hours * 10;
    double taxs = 0;

    if(money > BASE_MONEY2 + BASE_MONEY1)
        taxs = BASE_MONEY1 * RATE1 + BASE_MONEY2 * RATE2 + (money-BASE_MONEY1-BASE_MONEY2) * RATE3;
    else if(money > BASE_MONEY1)
        taxs = BASE_MONEY1 * RATE1 + (money-BASE_MONEY1) * RATE2;
    else
        taxs = 1.0 * money * RATE1;

    printf("wages = %d, taxs = %lf, profit = %lf\n", money, taxs, money-taxs);

    return 0;
}
