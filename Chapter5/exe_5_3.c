#include <stdio.h>

int main(void)
{
    int days = 0;
    printf("Please input a days: ");
    scanf("%d", &days);
    int adays = 0;
    int weeks = 0;

    while(days > 0)
    {
        weeks = days / 7;
        adays = days % 7;
        printf("%d days are %d weeks, %d days.\n", days, weeks, adays);
        printf("Please input a days: ");
        scanf("%d", &days);
   }

    return 0;
}
