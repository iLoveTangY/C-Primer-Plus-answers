#include <stdio.h>

#define SIZE 8

int main(void)
{
    double first[SIZE];
    double second[SIZE];

    int i;
    for(i = 0; i < SIZE; i++)
        scanf("%lf", &first[i]);

    second[0] = first[0];
    
    for(i = 1; i < SIZE; i++)
    {
        second[i] = second[i-1] + first[i];
    }

    for(i = 0; i < SIZE; i++)
        printf("%.1lf ", first[i]);
    printf("\n");

    for(i = 0; i < SIZE; i++)
        printf("%.1lf ", second[i]);
    printf("\n");

    return 0;
}
