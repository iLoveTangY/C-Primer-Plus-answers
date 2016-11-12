#include <stdio.h>

 void smile(void);

int main(void)
{
    smile();
    smile();
    smile();
    putchar('\n');
    smile();
    smile();
    puts("");
    smile();
    printf("\n");

    return 0;
}

void smile(void)
{
    printf("smile!");
}
