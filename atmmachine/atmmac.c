#include <stdio.h>
#include <stdlib.h>

// Sample user account data
typedef struct {
    int accountNumber;
    int pin;
    double balance;
} Account;

Account accounts[] = {
    {12345, 1234, 1000.0},
    {54321, 4321, 1500.0},
};

int currentAccount = -1;

void login() {
    int accountNumber, pin;
    printf("Enter your account number: ");
    scanf("%d", &accountNumber);
    printf("Enter your PIN: ");
    scanf("%d", &pin);

    for (int i = 0; i < sizeof(accounts) / sizeof(accounts[0]); i++) {
        if (accounts[i].accountNumber == accountNumber && accounts[i].pin == pin) {
            currentAccount = i;
            return;
        }
    }

    printf("Invalid account number or PIN.\n");
}

void showBalance() {
    if (currentAccount != -1) {
        printf("Account balance: $%.2f\n", accounts[currentAccount].balance);
    } else {
        printf("Please log in first.\n");
    }
}

void deposit() {
    double amount;
    if (currentAccount != -1) {
        printf("Enter the amount to deposit: $");
        scanf("%lf", &amount);
        if (amount > 0) {
            accounts[currentAccount].balance += amount;
            printf("Deposit successful.\n");
        } else {
            printf("Invalid deposit amount.\n");
        }
    } else {
        printf("Please log in first.\n");
    }
}

void withdraw() {
    double amount;
    if (currentAccount != -1) {
        printf("Enter the amount to withdraw: $");
        scanf("%lf", &amount);
        if (amount > 0 && amount <= accounts[currentAccount].balance) {
            accounts[currentAccount].balance -= amount;
            printf("Withdrawal successful.\n");
        } else {
            printf("Invalid withdrawal amount or insufficient balance.\n");
        }
    } else {
        printf("Please log in first.\n");
    }
}

void logout() {
    currentAccount = -1;
    printf("Logged out.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nATM Menu:\n");
        printf("1. Login\n");
        printf("2. Show Balance\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Logout\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                login();
                break;
            case 2:
                showBalance();
                break;
            case 3:
                deposit();
                break;
            case 4:
                withdraw();
                break;
            case 5:
                logout();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
