#include <stdio.h>   // Provides input and output functions

int main()           // Program execution starts here
{
    int num, i, isPrime = 1;  // num stores input, i for loop, isPrime flag

    printf("Enter a number: ");  // Ask user to enter a number
    scanf("%d", &num);           // Read the number

    /* Check if the number is positive, negative, or zero */
    if (num > 0)
        printf("Number is Positive\n");
    else if (num < 0)
        printf("Number is Negative\n");
    else
        printf("Number is Zero\n");

    /* Check if the number is even or odd */
    if (num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    /* Check if the number is prime */
    if (num <= 1)   // Prime numbers are greater than 1
    {
        printf("Number is Not Prime\n");
    }
    else
    {
        for (i = 2; i <= num / 2; i++)  // Loop to check divisibility
        {
            if (num % i == 0)
            {
                isPrime = 0;  // Number is not prime
                break;
            }
        }

        if (isPrime)
            printf("Number is Prime\n");
        else
            printf("Number is Not Prime\n");
    }

    return 0;   // End of program
}
