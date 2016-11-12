#include <stdio.h>
#include <float.h>

int main(void)
{
    float f = 1.0/3.0;
    double d = 1.0/3.0;

    printf("%.4f %.4lf\n", f, d);
    printf("%.12f %.12lf\n", f, d);
    printf("%.16f %.16lf\n", f, d);
    printf("FLT_DIG = %d DBL_DIG = %d\n", FLT_DIG, DBL_DIG);

    return 0;
}
