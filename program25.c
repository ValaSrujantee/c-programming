#include <stdio.h>
#include <string.h>

// Global data
char books[10][50] = {
    "The Great Gatsby",
    "1984",
    "To Kill a Mockingbird",
    "Moby Dick"
};
int totalBooks = 4;

// ---------------------------------------------------
// Function: Display list of available books
void displayBooks() {
    printf("\nAvailable Books:\n");
    for (int i = 0; i < totalBooks; i++) {
        printf("  %s\n", books[i]);
    }
}

// ---------------------------------------------------
// Function: Get total number of books
int getTotalBooks() {
    return totalBooks;
}

// ---------------------------------------------------
// Function: Borrow a book
void borrowBook(char *bookName) {
    int found = 0;
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(books[i], bookName) == 0) {
            found = 1;
            // Shift all books up by one position
            for (int j = i; j < totalBooks - 1; j++) {
                strcpy(books[j], books[j + 1]);
            }
            totalBooks--;
            printf("You borrowed: %s\n", bookName);
            break;
        }
    }
    if (!found) {
        printf("Book not available!\n");
    }
}

// ---------------------------------------------------
// Function: Calculate fine for overdue book
float calculateFine(int daysLate) {
    float fineRate = 2.0;  // ₹2 per day
    return daysLate * fineRate;
}

// ---------------------------------------------------
// Main Function
int main() {
    int choice;
    do {
        printf("\n====== Library Menu ======\n");
        printf("1. Display available books\n");
        printf("2. Get total number of books\n");
        printf("3. Borrow a book\n");
        printf("4. Calculate fine\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // clear newline from buffer

        switch (choice) {
            case 1:
                displayBooks();
                break;

            case 2:
                printf("Total number of books: %d\n", getTotalBooks());
                break;

            case 3: {
                char bookName[50];
                printf("Enter book name to borrow: ");
                fgets(bookName, sizeof(bookName), stdin);
                bookName[strcspn(bookName, "\n")] = 0;  // remove newline
                borrowBook(bookName);
                break;
            }

            case 4: {
                int days;
                printf("Enter number of days late: ");
                scanf("%d", &days);
                printf("Fine amount: ₹%.2f\n", calculateFine(days));
                break;
            }

            case 5:
                printf("Exiting... Thank you!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

