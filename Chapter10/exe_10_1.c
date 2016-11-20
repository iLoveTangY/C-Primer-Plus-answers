#include <stdio.h>

#define MONTHS 12
#define YEARS 3

int main(void)
{
    const float rain[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 3.4, 3.2, 5.2, 5.7, 7.4, 1.0, 0.0, 3.5}
    };

    int year, month;
    float subtot, total;

    printf(" YEAR   RAINFALL (inches) \n");
    for(year = 0, subtot = 0; year < YEARS; year++)
    {
        for(month = 0, subtot = 0; month <MONTHS; month++)
            subtot += *(*(rain+year)+month);
        printf("%5d %15.1f\n", 2000+year, subtot);
        total += subtot;
    }

    printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);
    printf("MONTHLY AVERAGE: \n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for(month = 0; month < MONTHS; month++)
    {
        for(year = 0, subtot = 0; year < YEARS; year++)
            subtot += *(*(rain+year)+month);
        printf("%4.1f ", subtot/YEARS);
    }

    printf("\n");

    return 0;
}
