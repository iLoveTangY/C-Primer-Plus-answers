#include <stdio.h>

static int count = 0;

void func(void)
{
    count++;
}

int main(void)
{
    int i;
    for(i = 0; i < 4; i++)
        func();

    printf("Function 'func' has been called %d times.\n", count);

    return 0;
}
