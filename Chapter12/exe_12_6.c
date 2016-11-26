#include <stdio.h>
#include <time.h>

#define SIZE 1000

int main(void)
{
    srand((unsigned)time(NULL));

    int num_count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i;
    int num;
    
    for(i = 0; i < SIZE; i++)
    {
        num = rand() % 10 + 1;
        num_count[num-1]++;
    }


    for(i = 0; i < 10; i++)
    {
        printf("%d : %d times.\n", i+1, num_count[i]);
    }

    return 0;
}
