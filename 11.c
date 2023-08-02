#include <stdio.h>

#define G 6.67e-11
int main()
{
    double g, R, mass;
    // Input the acceleration due to gravity (in m/s^2)
    printf("Enter g value: ");
    scanf("%lf", &g);

    // Input the Radius value
    printf("Enter radius value: ");
    scanf("%lf", &R);

    mass = (g * R * R) / G;
    printf("Mass of that particle is = %e kg\n", mass);
    return 0;
}