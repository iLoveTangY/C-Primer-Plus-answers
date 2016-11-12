#include <stdio.h>

void praise(void);
void amaze(void);

int main(void)
{
    praise();
    praise();
    praise();
    amaze();
    return 0;
}

void praise(void)
{
    printf("For he's a jolly good fellow!\n");
}

void amaze(void)
{
    printf("Which nobody can deny!\n");
}
