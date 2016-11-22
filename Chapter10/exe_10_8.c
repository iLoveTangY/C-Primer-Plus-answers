#include <stdio.h>

void copy_VAL(int rows, int cols, double src[rows][cols], double tar[rows][cols]);
void print_VAL(int rows, int cols, double arr[rows][cols]);

int main(void)
{
    double arr[3][5] = {
        {2.1, 3.4, 4.6, 3.8, 2.9},
        {3.2, 1.4, 3.6, 9.4, 6.5},
        {5.7, 3.8, 3.9, 3.0, 7.4}
    };
    double tar[3][5];

    copy_VAL(3, 5, arr, tar);
    printf("source array: \n");
    print_VAL(3, 5, arr);
    printf("target array: \n");
    print_VAL(3, 5, tar);

    return 0;
}

void copy_VAL(int rows, int cols, double src[rows][cols], double tar[rows][cols])
{
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            tar[i][j] = src[i][j];
}

void print_VAL(int rows, int cols, double arr[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            printf("%f  ", arr[i][j]);
        printf("\n");
    }
}
