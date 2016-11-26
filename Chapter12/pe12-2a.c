#include "pe12-2a.h"

static int mode;
static double distance;
static double used_gass;

void set_mode(int mode_)
{
    mode = mode_;
}

void get_info(void)
{
    if(mode >= 1)
    {
        if(mode > 1)
            printf("Invalid mode specified. Mode 1(US) used.\n");
        mode = 1;
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &used_gass);
    }
    else if(mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &used_gass);
    }
}

void show_info(void)
{
    if(mode == 0)
    {
        printf("Fuel consumption is %.1lf liters per 100km.\n", used_gass * 100 / distance);
    }
    else if(mode == 1)
        printf("Fuel consumption is %.1lf miles per gallon.\n", distance / used_gass);
}
