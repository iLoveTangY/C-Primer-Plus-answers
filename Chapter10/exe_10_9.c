#include <stdio.h>

void add_arr(int arr_1[], int arr_2[], int ret[], int size);

int main(void)
{
    int arr_1[4] = {2, 4, 5, 8};
    int arr_2[4] = {1, 0, 4, 6};
    int ret[4];

    add_arr(arr_1, arr_2, ret, 4);

    int i;
    for(i = 0; i < 4; i++)
        printf("%d ", ret[i]);

    printf("\n");

    return 0;
}

void add_arr(int arr_1[], int arr_2[], int ret[], int size)
{
    int i = 0;
    for(i = 0; i < size; i++)
        ret[i] = arr_1[i] + arr_2[i];
}
