#include <stdio.h>

int main(void)
{
    double Dap_c_mon = 100;
    double Dei_c_mon = 100;
    double Dap_b_mon = 100;
    double Dei_b_mon = 100;

    double Dap_rate = 0.1;
    double Dei_rate = 0.05;

    int year = 0;

    while(Dei_c_mon <= Dap_c_mon)
    {
        Dei_c_mon = Dei_c_mon * (1 + Dei_rate);
        Dap_c_mon = Dap_b_mon * (1 + (++year) * Dap_rate); 
    }

    printf("year = %d, Dei current money = %lf, Dap current money = %lf\n", year, Dei_c_mon, Dap_c_mon);

    return 0;
}
