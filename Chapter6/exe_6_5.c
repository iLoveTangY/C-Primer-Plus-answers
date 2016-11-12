#include <stdio.h>

int main(void)
{
    int low = 0;
    int up = 0;

    printf("Enter lower and upper bounds: ");
    scanf("%d %d", &low, &up);

    int i;
    printf("num    square      curbe  \n");
    for(i = low; i <= up; i++)
        printf("%3d    %6d   %8d\n", i, i*i, i*i*i);

    return 0;
}
