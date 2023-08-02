#include <stdio.h>

int main()
{
    double PI = 3.1416;
    double circumference, radius;

    // Input the radius of the circle
    printf("Enter radius of the area in m: ");
    scanf("%lf", &radius);

    // Calculating the circumference of the circle
    circumference = 2 * PI * radius;
    printf("Circumference of the area is: %.2f m\n", circumference);
    return 0;
}