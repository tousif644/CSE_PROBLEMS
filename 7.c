#include <stdio.h>

int main()
{
    // Declare variables
    double a = 30;
    double b = 20;
    double summation, subtraction, multiplication, division, average;

    // Summation
    summation = a + b;
    // Subtraction
    subtraction = a - b;
    // Multiplication
    multiplication = a * b;
    // Division
    division = a / b;
    // Average
    average = (a + b) / 2;

    // Print results
    printf("Summation: %.2f\n", summation);
    printf("Subtraction: %.2f\n", subtraction);
    printf("Multiplication: %.2f\n", multiplication);
    printf("Division: %.3f\n", division);
    printf("Average: %.3f\n", average);

    return 0;
}