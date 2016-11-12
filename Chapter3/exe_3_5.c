#include <stdio.h>

int main(void)
{
    long seconds = 3.156e7;
    int age = 0;
    printf("Please input your age: ");
    scanf("%d", &age);
    printf("You have lived %ld seconds.\n", age * seconds);

    return 0;
}
