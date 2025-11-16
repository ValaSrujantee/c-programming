#include <stdio.h>
#include <string.h>

union BookDetail {
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int isIssued;
};

struct Book {
    union BookDetail detail;
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int isIssued;
};

int main() {
    struct Book book;

    // Input book details
    printf("Enter book accession number: ");
    scanf("%d", &book.detail.accessionNumber);
    book.accessionNumber = book.detail.accessionNumber;

    getchar();
    printf("Enter book title: ");
    fgets(book.detail.title, sizeof(book.detail.title), stdin);
    book.detail.title[strcspn(book.detail.title, "\n")] = '\0';
    strcpy(book.title, book.detail.title);

    printf("Enter author name: ");
    fgets(book.detail.author, sizeof(book.detail.author), stdin);
    book.detail.author[strcspn(book.detail.author, "\n")] = '\0';
    strcpy(book.author, book.detail.author);

    printf("Enter book price: ");
    scanf("%f", &book.detail.price);
    book.price = book.detail.price;

    printf("Is the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &book.detail.isIssued);
    book.isIssued = book.detail.isIssued;

    // Display book details
    printf("\n--- Book Details ---\n");
    printf("Accession Number: %d\n", book.accessionNumber);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Status: %s\n", book.isIssued ? "Issued" : "Available");

    return 0;
}
