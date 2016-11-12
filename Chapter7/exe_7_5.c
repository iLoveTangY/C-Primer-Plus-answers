
#include <stdio.h>

int main(void)
{
    int n;
    int even_cnt = 0;
    int even_sum = 0;
    int odd_cnt = 0;
    int odd_sum = 0;

    while(scanf("%d", &n) == 1 && n != 0)
    {
        switch(n % 2)
        {
            case 0:
                even_cnt++;
                even_sum += n;
                break;
            case 1:
                odd_cnt++;
                odd_sum += n;
                break;
            default:
                break;
        }
        
    }

    double even_ave = even_sum * 1.0 / even_cnt;
    double odd_ave = odd_sum * 1.0 / odd_cnt;

    printf("even cnt = %d, even average = %lf\nodd cnt = %d, odd average = %lf\n", even_cnt, even_ave, odd_cnt, odd_ave);

    return 0;
}
