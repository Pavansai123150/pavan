#include <stdio.h>   // Includes standard input-output functions like printf and scanf

int main()           // Main function where execution begins
{
    char name[50];   // Variable to store the user's name (string)
    int age;         // Variable to store the user's age (integer)
    float salary;    // Variable to store the user's salary (floating-point number)

    printf("Enter your name: ");   // Prompts the user to enter their name
    scanf("%s", name);             // Reads a string input and stores it in name

    printf("Enter your age: ");    // Prompts the user to enter their age
    scanf("%d", &age);             // Reads an integer input and stores it in age

    printf("Enter your salary: "); // Prompts the user to enter their salary
    scanf("%f", &salary);          // Reads a float input and stores it in salary

    printf("\n--- User Details ---\n"); // Prints a heading
    printf("Name: %s\n", name);        // Prints the user's name
    printf("Age: %d\n", age);          // Prints the user's age
    printf("Salary: %.2f\n", salary);  // Prints the salary with 2 decimal places

    return 0;       // Ends the program successfully
}
