#include <stdio.h>

int main(int argc, char *argv[])
{
    int cnt = argc-1;

    while(cnt > 0)
    {
        printf("%s ", argv[cnt]);
        cnt--;
    }

    printf("\n");

    return 0;
}
