#include <stdio.h>   // Provides input-output functions

/* Function prototypes */
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float num1, num2;
    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    /* Call functions and display results */
    printf("Addition: %.2f\n", add(num1, num2));
    printf("Subtraction: %.2f\n", subtract(num1, num2));
    printf("Multiplication: %.2f\n", multiply(num1, num2));

    if (num2 != 0)   // Check for division by zero
        printf("Division: %.2f\n", divide(num1, num2));
    else
        printf("Division: Error (division by zero)\n");

    return 0;   // End of program
}

/* Function to add two numbers */
float add(float a, float b)
{
    return a + b;
}

/* Function to subtract two numbers */
float subtract(float a, float b)
{
    return a - b;
}

/* Function to multiply two numbers */
float multiply(float a, float b)
{
    return a * b;
}

/* Function to divide two numbers */
float divide(float a, float b)
{
    return a / b;
}
