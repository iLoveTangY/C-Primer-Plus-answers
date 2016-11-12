#include <stdio.h>

#define MINUTES_PER_HOUR 60

int main(void)
{
    int min = 0;
    int hour = 0;
    int amin = 0;

    printf("Please input how many mintues you have: ");
    scanf("%d", &min);
    while(min >= 0)
    {
        hour = min / MINUTES_PER_HOUR;
        amin = min % 60;
        printf("%d mintues equals to %d hours and %d mintues.\n", min, hour, amin);
        printf("Please input how many mintues you have: ");
        scanf("%d", &min);
    }

    return 0;
}
