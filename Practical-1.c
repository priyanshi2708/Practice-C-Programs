#include <stdio.h>

int findLength(const char *str)
{
    int length = 0;

    // Iterate through each character in the string until '\0'
    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if present
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }

    int length = findLength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}


