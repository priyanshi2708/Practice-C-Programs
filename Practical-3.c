#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate the sum of each digit raised to the power n
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the result is equal to the original number
    return (int)result == num;
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    } else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
