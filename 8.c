#include <stdio.h>

int main()
{
    double meter;
    printf("Enter the meter: ");
    scanf("%lf", &meter);
    printf("%.3fm in Kilometer is: %.3fm\n", meter, meter * 1000);
    return 0;
}