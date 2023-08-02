#include <stdio.h>
// Conversion factor: 1 GB = 8,589,934,592 bits
#define gig_to_bits 8589934592

int main()
{
    // Declare variables
    double gigabytes;
    long long bits;

    // Conversion Process
    printf("Enter gigabytes: ");
    scanf("%lf", &gigabytes);
    bits = gig_to_bits * gigabytes;
    printf("%.2f gigabytes is equal to %lld bits.\n", gigabytes, bits);
    return 0;
}