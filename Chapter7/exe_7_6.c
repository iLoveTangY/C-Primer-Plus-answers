#include <stdio.h>

int main(void)
{
    char pre_ch;
    char cur_ch;

    int cnt = 0;

    pre_ch = cur_ch = getchar();

    while((cur_ch = getchar()) != '#')
    {
        if(pre_ch == 'e' && cur_ch == 'i')
            cnt++;
        pre_ch = cur_ch;
    }

    printf("cnt = %d\n", cnt);

    return 0;
}
