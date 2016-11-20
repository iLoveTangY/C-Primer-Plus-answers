#include <stdio.h>
#include <time.h>

#define SIZE 5

int max_index(double src[]);

int main(void)
{
    int i;
    double src[SIZE];
    srand((unsigned)time(NULL));

    for(i = 0; i < SIZE; i++)
    {
        src[i] = 1.0 * (rand() % SIZE) + 0.1;
        printf("%.1lf ", src[i]);
    }


    printf("\n\nIndex of Maxinum: %d\n", max_index(src));

    return 0;
}

int max_index(double src[])
{
    double max = src[0];
    int index = 0;
    int i;
    for(i = 0; i < SIZE; i++)
        if(src[i] > max)
        {
            max = src[i];
            index = i;
        }

    return index;
}
