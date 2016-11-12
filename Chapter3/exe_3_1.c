#include <stdio.h> 
#include <limits.h> 
#include <float.h>

int main(void)
{
    int i = INT_MAX + 1;
    float fo = FLT_MAX + 1;
    float fb = FLT_MIN - 1;

    printf("i = %d, fo = %d, fb = %d\n", i, fo, fb);

    return 0;
}
