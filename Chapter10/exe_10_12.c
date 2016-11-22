#include <stdio.h>

#define ROWS 3
#define CLOS 5

double ave_1d(double arr[], int size);
void ave_per_set(double arr[][CLOS], int rows);
double ave_all(double arr[][CLOS], int rows);
double max(double arr[][CLOS], int rows);
void result(double arr[][CLOS], int rows);

int main(void)
{
    double arr[ROWS][CLOS];
    printf("Enter 3x5 numbers:\n");

    int i, j;
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < CLOS; j++)
            scanf("%lf", &arr[i][j]);

    result(arr, ROWS);

    return 0;
}

void result(double arr[][CLOS], int rows)
{
    printf("The average of every set:\n");
    ave_per_set(arr, rows);
    printf("The average of all: %f\n", ave_all(arr, rows));
    printf("The maximal number: %f\n", max(arr, rows));
}

double ave_1d(double arr[], int size)
{
    double sum = 0;
    int i;
    for(i = 0; i < size; i++)
        sum += arr[i];

    return sum / (size+1);
}

void ave_per_set(double arr[][CLOS], int rows)
{
    int i = 0;
    for(i = 0; i < rows; i++)
        printf("%f ", ave_1d(arr[i], CLOS));

    printf("\n");
}

double ave_all(double arr[][CLOS], int rows)
{
    double sum;

    int i;
    for(i = 0; i < rows; i++)
        sum += ave_1d(arr[i], CLOS);

    return sum / (rows + 1);
}

double max(double arr[][CLOS], int rows)
{
    double max = arr[0][0];

    int i, j;
    for(i = 0; i < rows; i++)
        for(j = 0; j < CLOS; j++)
        {
            if(max < arr[i][j])
                max = arr[i][j];
        }

    return max;
}
