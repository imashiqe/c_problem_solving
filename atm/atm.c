#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Sample account information
char accountNumber[] = "123456";
char pin[] = "1234";
float accountBalance = 1000.0;

// Function to perform a balance inquiry
void checkBalance() {
    printf("Account Number: %s\n", accountNumber);
    printf("Enter your PIN: ");
    
    char inputPin[5];
    scanf("%s", inputPin);
    
    if (strcmp(inputPin, pin) == 0) {
        printf("Your account balance is $%.2f\n", accountBalance);
    } else {
        printf("Invalid PIN. Please try again.\n");
    }
}

int main() {
    int option;
    
    while (1) {
        printf("\n==== ATM Menu ====\n");
        printf("1. Check Balance\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                checkBalance();
                break;
            case 2:
                printf("Thank you for using the ATM. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
