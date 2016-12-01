#include <stdio.h>
#include <time.h>

void delay(double);

int main(void)
{
    double time;
    printf("Input the delay: ");
    scanf("%lf", &time);
    delay(time);

    return 0;
}

void delay(double time)
{
    unsigned long long first = clock();

    while((double)(clock() - first) < CLOCKS_PER_SEC * time);
}
