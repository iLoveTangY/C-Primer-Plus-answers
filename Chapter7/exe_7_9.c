#include <stdio.h>
#include <math.h>

int is_prime(int x);

int main(void)
{
    int num = 0;

    printf("Enter a number:");
    scanf("%d", &num);

    int i = 2;
    int count = 0;

    while(i <= num)
    {
        if(is_prime(i))
        {
            count++;
            printf("%4d ", i);
            if(count % 8 == 0)
                printf("\n");
        }
        i++;
    }
    printf("\n");

    return 0;
}

int is_prime(int x)
{
    int flag = 0;

    int k = (int)sqrt(x);
    int i = 0;

    for(i = 2; i <= k; i++)
        if(x % i == 0)
            break;

    if(i > k)
        flag = 1;

    return flag;
}
