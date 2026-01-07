#include <stdio.h>   // Provides input and output functions

int main()           // Program execution starts here
{
    float num1, num2;   // Variables to store the two numbers
    char op;            // Variable to store the operator

    printf("Enter first number: ");   // Ask user for first number
    scanf("%f", &num1);               // Read first number

    printf("Enter second number: ");  // Ask user for second number
    scanf("%f", &num2);               // Read second number

    printf("Enter operator (+ - * /): "); // Ask user for operator
    scanf(" %c", &op);                    // Read operator (space ignores newline)

    switch(op)    // Switch based on operator entered
    {
        case '+':
            printf("Result: %.2f\n", num1 + num2); // Addition
            break;

        case '-':
            printf("Result: %.2f\n", num1 - num2); // Subtraction
            break;

        case '*':
            printf("Result: %.2f\n", num1 * num2); // Multiplication
            break;

        case '/':
            if (num2 == 0)   // Check for division by zero
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result: %.2f\n", num1 / num2); // Division
            break;

        default:
            printf("Error: Invalid operator.\n"); // Handles invalid operator
    }

    return 0;   // End of program
}
