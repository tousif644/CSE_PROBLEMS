#include <stdio.h>
int main()
{
    // Initialize variables
    double PI = 3.1416;
    double r, volume;

    // Get radius
    printf("Enter the radius of the globe in m: ");
    scanf("%lf", &r);

    // Calculating the volume
    volume = (4 / 3) * PI * r * r * r;
    printf("The volume of the globe is: %.3f m^3\n", volume);

    return 0;
}