#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);
    // %d reads an integer, and ignores leading whitespace by default

    printf("Enter your height: ");
    scanf("%f", &height);
    // %f reads a float, also ignores leading whitespace by default

    printf("Enter your grade: ");
    scanf(" %c", &grade);
    // The space before %c is IMPORTANT:
    // %c does NOT skip whitespace by default (unlike %d and %f),
    // so without the space, it would accidentally read the newline
    // left in the buffer from the previous input.

    printf("\n--- Results ---\n");

    printf("Age:    %d   (stored at address: %p)\n", age, &age);
    printf("Height: %.2f (stored at address: %p)\n", height, &height);
    printf("Grade:  %c   (stored at address: %p)\n", grade, &grade);

    // CONCEPTS COVERED:
    // - Basic data types: int, float, char
    // - Reading user input with scanf()
    // - Format specifiers: %d, %f, %c
    // - Memory addresses with the & operator and %p
    // - Why scanf(" %c") needs a leading space

    return 0;
}
