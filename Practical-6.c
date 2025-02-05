#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(const char *binary)
{
    int decimal = 0, base = 1, length = strlen(binary);
    for (int i = length - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

// Function to convert decimal to octal
void decimalToOctal(int decimal)
{
    int octal[32], index = 0;

    while (decimal != 0)
    {
        octal[index++] = decimal % 8;
        decimal /= 8;
    }

    printf("The octal equivalent is: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", octal[i]);
    }
    printf("\n");
}

int main()
{
    char binary[32];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Validate the binary input
    int isValid = 1;
    for (int i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] != '0' && binary[i] != '1')
        {
            isValid = 0;
            break;
        }
    }

    if (isValid)
    {
        // Convert binary to decimal
        int decimal = binaryToDecimal(binary);
        // Convert decimal to octal
        decimalToOctal(decimal);
    } else
    {
        printf("Invalid binary number. Please enter a number containing only 0s and 1s.\n");
    }

    return 0;
}

