#include <stdio.h>

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d  %d", &num1, &num2);

    int result = lcm(num1, num2);

    printf("The LCM of %d and %d is %d.\n", num1, num2, result);

    return 0;
}
