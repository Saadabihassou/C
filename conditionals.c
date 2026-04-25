#include <stdio.h>

int main()
{
    printf("Welcome to Even or Odd program!\n");

    int number;
    printf("Type a number: ");
    scanf("%d", &number);

    // --- Check 1: Even or Odd ---
    // The modulo operator % gives the remainder of a division.
    // If number % 2 == 0, there is no remainder, so it's even.
    if (number % 2 == 0)
    {
        printf("This number is EVEN\n");
    }
    else
    {
        printf("This number is ODD\n");
    }

    // --- Check 2: Positive, Negative, or Zero ---
    // if / else if / else lets you handle more than two cases.
    // Only ONE branch will execute — the first one that is true.
    if (number > 0)
    {
        printf("It is POSITIVE\n");
    }
    else if (number < 0)
    {
        printf("It is NEGATIVE\n");
    }
    else
    {
        // This runs when both conditions above are false,
        // which means number == 0.
        printf("It is ZERO\n");
    }

    // CONCEPTS COVERED:
    // - if / else
    // - if / else if / else chains
    // - The modulo operator %
    // - Comparison operators: ==, >, <

    return 0;
}
