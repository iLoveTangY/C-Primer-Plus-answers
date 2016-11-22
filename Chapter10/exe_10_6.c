#include <stdio.h>

void copy_arr(double src[], double tar[], int size);
void copy_arr_2d(double src[][3], double tar[][3], int size);
void print(double src[][3], int size);

int main(void)
{
    double source[3][3] = {
        {1.1, 2.2, 3.3},
        {6.6, 7.7, 8.8},
        {9.9, 8.8, 7.7}
    };
    double target[3][3];

    copy_arr_2d(source, target, 3);
    print(source, 3);
    print(target, 3);

    return 0;
}

void print(double src[][3], int size)
{
    int i;
    int j;

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%lf ", src[i][j]);
        printf("\n");
    }

    printf("\n");
}

void copy_arr(double src[], double tar[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        tar[i] = src[i];
}

void copy_arr_2d(double src[][3], double tar[][3], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        copy_arr(src[i], tar[i], size);
    }
}
