#include <stdio.h>
#include <math.h>

int main()
{
    long long n, m, a;

    // Read input for dimensions of the square and the size of the flagstone
    printf("Enter the dimensions of the square (n m) and the size of the flagstone (a):\n");
    scanf("%lld %lld %lld", &n, &m, &a);

    // Calculate the number of flagstones needed in each dimension
    long long numFlagstonesX = (n + a - 1) / a; // Using integer math to simulate ceil((double)n / a)
    long long numFlagstonesY = (m + a - 1) / a; // Using integer math to simulate ceil((double)m / a)

    // Total number of flagstones needed
    long long totalFlagstones = numFlagstonesX * numFlagstonesY;

    // Output the result
    printf("%lld\n", totalFlagstones);

    return 0;
}

