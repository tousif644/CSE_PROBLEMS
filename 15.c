#include <stdio.h>
int main()
{
    // Initialize variables and taking input
    double a, b, circumference;
    printf("Enter first side of the rectangle in m: ");
    scanf("%lf", &a);
    printf("Enter second side of the rectangle in m: ");
    scanf("%lf", &b);

    // Calucating the circumference of the rectangle
    circumference = 2 * (a + b);
    printf("The circumference of the rectangle is: %.2lf m\n", circumference);

    return 0;
}