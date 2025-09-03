#include<stdio.h>
#include <math.h>

int cockroach_speed(double s)
{
    return round(s * 1000 / 36); //Good Luck!
}

int main()
{
    printf("Hello world \n");
    int result = cockroach_speed(1.08);
    printf("%i \n", result);
    printf("Goodbye world \n");
}

