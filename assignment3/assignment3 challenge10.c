#include <stdio.h>   // Provides input-output functions

/* Function to swap two numbers using pointers */
void swap(int *a, int *b)
{
    int temp = *a;   // Store value at address a
    *a = *b;         // Assign value at address b to a
    *b = temp;       // Assign stored value to b
}

int main()
{
    int x, y, n, i;
    
    /* Swapping two numbers using pointers */
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    printf("\nBefore swap:\n");
    printf("x = %d, Address of x = %p\n", x, (void*)&x);
    printf("y = %d, Address of y = %p\n", y, (void*)&y);

    swap(&x, &y);  // Call swap function with addresses

    printf("\nAfter swap:\n");
    printf("x = %d, Address of x = %p\n", x, (void*)&x);
    printf("y = %d, Address of y = %p\n", y, (void*)&y);

    /* Traversing array using pointers */
    printf("\nEnter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];           // Array of size n
    int *ptr = arr;       // Pointer to the first element of array

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);  // Read elements using pointer arithmetic
    }

    printf("\nArray elements using pointers:\n");
    for (i = 0; i < n; i++)
    {
        printf("Value: %d, Address: %p\n", *(ptr + i), (void*)(ptr + i));
    }

    return 0;   // End of program
}
