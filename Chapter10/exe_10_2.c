#include <stdio.h>

void copy_arr(double src[], double tar[], int size);
void copy_prr(double src[], double tar[], int size);
void print(double src[], int size);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];

    copy_arr(source, target1, 5);
    copy_prr(source, target2, 5);
    print(source, 5);
    print(target1, 5);
    print(target2, 5);

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

void copy_prr(double src[], double tar[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        *(tar++) = *(src++);
}
