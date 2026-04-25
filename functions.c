#include <stdio.h>

// This function TAKES an integer argument and RETURNS an integer.
// It returns 1 if the number is even, 0 if it is odd.
// Using 1/0 as true/false is a common C pattern (there is no bool by default).
int is_even(int a)
{
    if (a % 2 == 0)
    {
        return 1; // even -> true
    }
    else
    {
        return 0; // odd  -> false
    }
}

int main()
{
    int num;
    printf("Type a number: ");

    // scanf() itself returns the number of items successfully read.
    // We expect 1 item (%d = one integer), so we check if it equals 1.
    // If the user types a letter or symbol, scanf returns 0 (or EOF), 
    // and we catch that as invalid input.
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1; // returning a non-zero value from main signals an error
    }

    // is_even() returns 1 (true) or 0 (false),
    // so we can use it directly as the condition in an if statement.
    if (is_even(num))
    {
        printf("This number is EVEN\n");
    }
    else
    {
        printf("This number is ODD\n");
    }

    return 0; // returning 0 from main means the program finished successfully
}

// CONCEPTS COVERED:
// - Defining a function with a parameter (int a) and a return type (int)
// - Calling a function and using its return value
// - Validating user input by checking scanf's return value
// - Return values from main: 0 = success, non-zero = error
