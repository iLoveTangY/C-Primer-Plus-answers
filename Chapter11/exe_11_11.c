#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int words, uppers, lowers, pun, nums;
    words = uppers = lowers = pun = nums = 0;

    int is_word_begin = 1;

    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
        {
            if(is_word_begin)
            {
                words++;
                is_word_begin = 0;
            }
        }
        else
            is_word_begin = 1;

        if(isupper(ch))
            uppers++;
        else if(islower(ch))
            lowers++;
        else if(ispunct(ch))
            pun++;
        else if(isdigit(ch))
            nums++;
    }

    printf("Words: %d, Upper case: %d, Lower case: %d, punctuation: %d, number: %d \n", words, uppers, lowers, pun, nums);

    return 0;
}
