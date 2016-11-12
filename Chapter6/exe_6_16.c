#include <stdio.h>

int main(void)
{
    double cur_money = 100;

    double rate = 0.08;

    int years = 0;
    while(cur_money > 0)
    {
        cur_money += (cur_money * rate);
        cur_money -= 10;
        years++;
    }

    printf("Afrter %d years, Chuckie Lucky's account is empty!\n", years);
    return 0;
}
