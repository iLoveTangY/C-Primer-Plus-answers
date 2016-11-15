#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int lower_cnt = 0;
    int upper_cnt = 0;

    char ch;

    while((ch = getchar()) != EOF)
    {
        if(islower(ch))
            lower_cnt++;
        if(isupper(ch))
            upper_cnt++;
    }

    printf("Lower case: %d\nUpper case: %d\n", lower_cnt, upper_cnt);

    return 0;
}
