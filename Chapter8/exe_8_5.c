#include <stdio.h>

int main(void)
{ 
    int guess = 50;
    int max = 100;
    int min = 0;
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a b if my guess is bigger and with a s if it is smaller.\n");
    printf("And if my guess if right, response with a y.\n");
    printf("Uh...is your number %d?\n", guess);

    char response;

    while((response = getchar()) != 'y')
    {
        if (response == 'b' || response == 's')
        {
            if(response == 'b')
                max = guess - 1;
            else
                min = guess + 1;
            guess = (max+min) / 2;
            printf("Well, then is it %d?\n", guess);
        }
        else
        {
            printf("Sorry, I understand only y or n.\n");
        }
        while(getchar() != '\n')
            continue;
    }

    return 0;
}

