#include <stdio.h>

int main() {
    int balance = 5000;
    int withdraw;
    char choice;

    printf("Welcome to The National Bank of Bharat ATM\n");
    printf("Your starting balance is Rs. %d\n", balance);

    do {
        printf("\nEnter the amount you want to withdraw: Rs. ");
        scanf("%d", &withdraw);

        if (withdraw <= balance) {
            balance -= withdraw;
            printf("Transaction successful!\n");
            printf("Remaining balance: Rs. %d\n", balance);
        } else {
            printf("Insufficient balance.\n");
        }

        printf("\nDo you want to make another transaction? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using The National Bank of Bharat ATM.\n");
    printf("Your final balance is Rs. %d\n", balance);

    return 0;
}

