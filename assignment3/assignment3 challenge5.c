#include <stdio.h>   // Provides printf function for output

int main()           // Program execution starts here
{
    int i, j;        // Loop control variables

    for (i = 1; i <= 5; i++)    // Outer loop controls the number of rows
    {
        for (j = 1; j <= i; j++) // Inner loop prints stars in each row
        {
            printf("*");        // Print a star without a new line
        }
        printf("\n");           // Move to the next line after each row
    }

    return 0;        // End of program
}
