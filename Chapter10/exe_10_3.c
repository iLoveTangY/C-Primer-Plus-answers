#include <stdio.h>
#include <time.h>

#define SIZE 5

int max(int src[]);

int main(void)
{
    int i;
    int src[SIZE];
    srand((unsigned)time(NULL));

    for(i = 0; i < SIZE; i++)
    {
        src[i] = rand() % SIZE + 1;
        printf("%d ", src[i]);
    }


    printf("\n\nMaxinum: %d\n", max(src));

    return 0;
}

int max(int src[])
{
    int max = src[0];
    int i;
    for(i = 0; i < SIZE; i++)
        if(src[i] > max)
            max = src[i];

    return max;
}
