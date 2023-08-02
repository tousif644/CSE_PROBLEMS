#include <stdio.h>

int main()
{
    // Initialize variables
    double PI = 3.1416;
    double radius, area;
    printf("Enter the radius of the circle in m: ");
    scanf("%lf", &radius);
    // Caluating the area of the circle
    area = PI * radius * radius;
    printf("Area of the circle is %.2f m\n", area);
    return 0;
}