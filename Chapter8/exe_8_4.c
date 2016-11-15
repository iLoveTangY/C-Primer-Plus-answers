#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch_cnt = 0;
    int word_cnt = 0;
    int cur_word_cnt = 0;

    char ch;

    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
        {
            cur_word_cnt++;
            ch_cnt++;
        }
        if(cur_word_cnt != 0 && (ch == ' ' || ch == '\n'))
        {
            word_cnt++;
            cur_word_cnt = 0;
        }
    }

    printf("average characters: %.2lf\n", (double)(ch_cnt)/word_cnt);

    return 0;
}
