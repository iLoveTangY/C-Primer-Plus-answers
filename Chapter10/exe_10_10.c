#include <stdio.h>
#include <time.h>

#define ROWS 3
#define CLOS 5 

void print_arr(int arr[][CLOS], int rows);
void double_arr(int arr[][CLOS], int rows);

int main(void)
{
    srand((unsigned)time(NULL));

    int arr[ROWS][CLOS];

    int i, j;
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < CLOS; j++)
            arr[i][j] = rand() % 20 + 1;
    print_arr(arr, ROWS);
    double_arr(arr, ROWS);
    printf("\n\n");
    print_arr(arr, ROWS);

    return 0;
}

void print_arr(int arr[][CLOS], int rows)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < CLOS; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
}

void double_arr(int arr[][CLOS], int rows)
{
    int i, j;
    for(i = 0; i < rows; i++)
        for(j = 0; j < CLOS; j++)
            arr[i][j] *= 2;
}
