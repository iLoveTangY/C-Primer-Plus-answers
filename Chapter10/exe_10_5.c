#include <stdio.h>
#include <time.h>

#define SIZE 5

double sub(double src[]);

int main(void)
{
    srand((unsigned)time(NULL));
    int i = 0;
    double src[SIZE];

    for(i = 0; i < SIZE; i++)
    {
        src[i] = (double)(rand()%10);
        printf("%lf ", src[i]);
    }

    printf("\n%lf\n", sub(src));

    return 0;
}

double sub(double src[])
{
    double max, min;
    max = min = src[0];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        if(src[i] > max)
            max = src[i];
        if(src[i] < min)
            min = src[i];
    }

    return max - min;
}
