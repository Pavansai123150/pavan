#include <stdio.h>   // Provides file I/O functions
#include <stdlib.h>  // Provides exit() function

int main()
{
    FILE *fp;        // File pointer
    char text[100];  // Buffer to store input text

    /* ---------- Write text to file ---------- */
    fp = fopen("data.txt", "w");  // Open file in write mode
    if (fp == NULL)
    {
        printf("Error: Could not open file for writing.\n");
        exit(1);  // Exit if file cannot be opened
    }

    printf("Enter text to write to file: ");
    scanf(" %[^\n]", text);      // Read a line including spaces
    fprintf(fp, "%s\n", text);   // Write text to file
    fclose(fp);                   // Close file after writing

    /* ---------- Read text from file ---------- */
    fp = fopen("data.txt", "r");  // Open file in read mode
    if (fp == NULL)
    {
        printf("Error: Could not open file for reading.\n");
        exit(1);
    }

    printf("\nContents of file:\n");
    while (fscanf(fp, " %[^\n]", text) != EOF)  // Read line by line
    {
        printf("%s\n", text);
    }
    fclose(fp);  // Close file after reading

    /* ---------- Append new text ---------- */
    fp = fopen("data.txt", "a");  // Open file in append mode
    if (fp == NULL)
    {
        printf("Error: Could not open file for appending.\n");
        exit(1);
    }

    printf("\nEnter text to append to file: ");
    scanf(" %[^\n]", text);        // Read another line
    fprintf(fp, "%s\n", text);     // Append text to file
    fclose(fp);                     // Close file after appending

    printf("\nUpdated file contents:\n");
    fp = fopen("data.txt", "r");   // Open file in read mode again
    if (fp == NULL)
    {
        printf("Error: Could not open file for reading.\n");
        exit(1);
    }

    while (fscanf(fp, " %[^\n]", text) != EOF)
    {
        printf("%s\n", text);
    }
    fclose(fp);

    return 0;   // End of program
}
