#include <stdio.h>

void copy_arr(double src[], double tar[], int size);
void print(double src[], int size);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target[3];

    copy_arr(source+2, target, 3);
    print(source, 5);
    print(target, 3);

    return 0;
}

void print(double src[], int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
        printf("%.2lf ", src[i]);

    printf("\n");
}

void copy_arr(double src[], double tar[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        tar[i] = src[i];
}
