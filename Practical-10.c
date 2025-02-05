#include <stdio.h>

int isPerfectNumber(int num)
 {
    if (num <= 0)
    {
        return 0; // Negative numbers and zero cannot be perfect numbers.
    }

    int sum = 0;

    // Calculate the sum of proper divisors
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    // Check if the sum equals the number
    return sum == num;
}

int main()
{
    int num;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is perfect
    if (isPerfectNumber(num))
    {
        printf("%d is a Perfect Number.\n", num);
    } else
    {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}

