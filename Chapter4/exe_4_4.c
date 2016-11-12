#include <stdio.h>

int main(void)
{
    float inch = 0;
    char name[20];
    scanf("%f", &inch);
    printf("Please input your name: ");
    scanf("%s", name);
    printf("%s, you are %f feet tall\n", name, inch / 12);

    return 0;
}
