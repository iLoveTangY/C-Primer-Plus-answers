#include <stdio.h>

int main(void)
{
    char fName[10];
    char lName[10];

    printf("Please input your first name: ");
    scanf("%s", fName);
    printf("Please input your last name: ");
    scanf("%s", lName);
    int fLen = strlen(fName);
    int lLen = strlen(lName);
    printf("%s %s\n", fName, lName);
    printf("%*d %*d\n", fLen, fLen, lLen, lLen);
    printf("%s %s\n", fName, lName);
    printf("%-*d %-*d\n", fLen, fLen, lLen, lLen);


    return 0;
}
