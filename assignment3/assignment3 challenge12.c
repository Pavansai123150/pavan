#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100  // Maximum number of accounts

// Structure to store account information
struct Account {
    int accNumber;
    char name[50];
    float balance;
};

// Function prototypes
void createAccount(struct Account *acc, int *count);
void deposit(struct Account *acc, int count);
void withdraw(struct Account *acc, int count);
void checkBalance(struct Account *acc, int count);
void saveToFile(struct Account *acc, int count);
int loadFromFile(struct Account *acc);

int main()
{
    struct Account accounts[MAX_ACCOUNTS];
    int choice, count;

    // Load existing accounts from file
    count = loadFromFile(accounts);

    do {
        printf("\n----- Banking System Menu -----\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount(accounts, &count);
                saveToFile(accounts, count);
                break;
            case 2:
                deposit(accounts, count);
                saveToFile(accounts, count);
                break;
            case 3:
                withdraw(accounts, count);
                saveToFile(accounts, count);
                break;
            case 4:
                checkBalance(accounts, count);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 5);

    return 0;
}

/* ---------- Function Definitions ---------- */

// Create a new account
void createAccount(struct Account *acc, int *count)
{
    if (*count >= MAX_ACCOUNTS)
    {
        printf("Maximum number of accounts reached.\n");
        return;
    }

    printf("Enter account number: ");
    scanf("%d", &acc[*count].accNumber);
    printf("Enter name: ");
    scanf(" %[^\n]", acc[*count].name); // Read full name with spaces
    printf("Enter initial balance: ");
    scanf("%f", &acc[*count].balance);

    (*count)++;
    printf("Account created successfully.\n");
}

// Deposit amount into an account
void deposit(struct Account *acc, int count)
{
    int accNo, found = 0;
    float amt;
    printf("Enter account number: ");
    scanf("%d", &accNo);

    for(int i=0; i<count; i++)
    {
        if(acc[i].accNumber == accNo)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amt);
            acc[i].balance += amt;
            printf("Amount deposited. New balance: %.2f\n", acc[i].balance);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Account not found.\n");
}

// Withdraw amount from an account
void withdraw(struct Account *acc, int count)
{
    int accNo, found = 0;
    float amt;
    printf("Enter account number: ");
    scanf("%d", &accNo);

    for(int i=0; i<count; i++)
    {
        if(acc[i].accNumber == accNo)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amt);
            if(amt > acc[i].balance)
                printf("Insufficient balance.\n");
            else
            {
                acc[i].balance -= amt;
                printf("Withdrawal successful. New balance: %.2f\n", acc[i].balance);
            }
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Account not found.\n");
}

// Check balance of an account
void checkBalance(struct Account *acc, int count)
{
    int accNo, found = 0;
    printf("Enter account number: ");
    scanf("%d", &accNo);

    for(int i=0; i<count; i++)
    {
        if(acc[i].accNumber == accNo)
        {
            printf("Account Holder: %s\n", acc[i].name);
            printf("Balance: %.2f\n", acc[i].balance);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Account not found.\n");
}

// Save all accounts to file
void saveToFile(struct Account *acc, int count)
{
    FILE *fp = fopen("accounts.dat", "wb"); // Binary write
    if(fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(acc, sizeof(struct Account), count, fp);
    fclose(fp);
}

// Load accounts from file
int loadFromFile(struct Account *acc)
{
    FILE *fp = fopen("accounts.dat", "rb"); // Binary read
    int count = 0;
    if(fp != NULL)
    {
        count = fread(acc, sizeof(struct Account), MAX_ACCOUNTS, fp);
        fclose(fp);
    }
    return count;
}
