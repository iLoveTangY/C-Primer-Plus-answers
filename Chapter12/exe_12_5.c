#include <stdio.h>
#include <time.h>

#define SIZE 100

void sort(int nums[]);

int main(void)
{
    srand((unsigned)time(NULL));

    int nums[SIZE];
    int i;
    
    for(i = 0; i < SIZE; i++)
        nums[i] = rand() % 10 + 1;

    sort(nums);

    for(i = 0; i < SIZE; i++)
    {
        printf("%-2d ", nums[i]);
        if((i+1) % 5 == 0)
            printf("\n");
    }

    return 0;
}

void sort(int nums[])
{
    int temp;
    int i, j;
    for(i = 0; i < SIZE; i++)
        for(j = i+1; j < SIZE; j++)
            if(nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
}
