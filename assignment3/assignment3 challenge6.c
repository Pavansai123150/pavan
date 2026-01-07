#include <stdio.h>   // Provides input and output functions

int main()           // Program execution starts here
{
    int n, i;        // n = number of elements, i = loop counter
    int sum = 0;     // Variable to store sum of elements

    printf("Enter number of elements: "); // Ask user for array size
    scanf("%d", &n);                      // Read array size

    int arr[n];      // Array with size decided at runtime (no hardcoding)

    /* Read elements into the array */
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1); // Prompt for each element
        scanf("%d", &arr[i]);                // Store element in array
        sum += arr[i];                       // Add element to sum
    }

    int largest = arr[0];   // Assume first element is largest
    int smallest = arr[0];  // Assume first element is smallest

    /* Find largest and smallest elements */
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    float average = (float)sum / n; // Calculate average

    /* Display results */
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;   // End of program
}
