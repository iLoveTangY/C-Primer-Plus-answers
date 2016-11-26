#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void)
{
    int dice, roll;
    int sides, counts;

    printf("Enter the number of sets; enter q to stop.\n");
    while(scanf("%d", &counts) == 1)
    {
        printf("How many sides and how many dice?\n");
        scanf("%d %d", &sides, &dice);
        int i;
        printf("Here are %d sets of %d %d-sided throws.\n", counts, dice, sides);
        for(i = 0; i < counts; i++)
            printf("%d ", roll_n_dice(dice, sides));

        printf("\nHow many sets? Enter q to stop.\n");
    }

    return 0;
}
