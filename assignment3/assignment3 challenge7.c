#include <stdio.h>   // Provides input-output functions

int main() 
{
    char str[100];       // Array to store input string
    int i, length = 0, vowels = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);    // Read string (without spaces)

    /* Calculate string length */
    while (str[length] != '\0') // Traverse until null character
    {
        length++;
    }

    /* Reverse string manually */
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    /* Count vowels */
    for (i = 0; i < length; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
    }
    printf("Number of vowels: %d\n", vowels);

    /* Check palindrome */
    int isPalindrome = 1;   // Flag for palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;   // End of program
}
#include <stdio.h>   // Provides input-output functions

int main() 
{
    char str[100];       // Array to store input string
    int i, length = 0, vowels = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);    // Read string (without spaces)

    /* Calculate string length */
    while (str[length] != '\0') // Traverse until null character
    {
        length++;
    }

    /* Reverse string manually */
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    /* Count vowels */
    for (i = 0; i < length; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
    }
    printf("Number of vowels: %d\n", vowels);

    /* Check palindrome */
    int isPalindrome = 1;   // Flag for palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;   // End of program
}
