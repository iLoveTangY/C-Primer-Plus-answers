#include <stdio.h>

int main(void)
{
    int cnt = 0;

    for(cnt = 0; getchar() != EOF; cnt++);

    printf("There are %d characters.\n", cnt);

    return 0;
}
