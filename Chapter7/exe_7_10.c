#include <stdio.h>

#define BASE_1 17850
#define BASE_2 23900
#define BASE_3 29750
#define BASE_4 14875

#define RATE_1 0.15
#define RATE_2 0.28

int main(void)
{
    int opt;
    int base_money;
    int revenue;
    double tax;
    while(1)
    {
        printf("***********************************\n");
        printf("Select your category:\n");
        printf("1) single          2) housemaster\n");
        printf("3) married         4) divorce\n");
        printf("5) quit\n");
        printf("***********************************\n");
        scanf("%d", &opt);

        if(opt == 1)
            base_money = BASE_1;
        else if(opt == 2)
            base_money = BASE_2;
        else if(opt == 3)
            base_money = BASE_3;
        else if(opt == 4)
            base_money = BASE_4;
        else if(opt == 5)
            break;
        else
            continue;

        printf("Input your revenue:");
        scanf("%d", &revenue);
        if(revenue > base_money)
            tax = base_money * RATE_1 + (revenue-base_money) * RATE_2;
        else
            tax = revenue * RATE_1;

        printf("Your taxs: %lf\n", tax);
    }

    return 0;
}
