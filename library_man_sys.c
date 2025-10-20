// Library Managment System
/*Add new books (Title, Author, ID, Quantity).

Display all books.

Search for a book by ID or Title.

Borrow a book (decrease quantity).

Return a book (increase quantity).

Exit program.*/
#include <stdio.h>
#include <string.h>

// Structure for a book
struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

// Global array of books
struct Book books[100];  
int bookCount = 0;   // how many books are added

// Function to add a new book
void addBook() {
    printf("Enter Book ID: ");
    scanf("%d", &books[bookCount].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", books[bookCount].title); // read string with spaces

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[bookCount].author);

    printf("Enter Quantity: ");
    scanf("%d", &books[bookCount].quantity);

    bookCount++;
    printf("Book added successfully!\n");
}

// Function to display all books
void displayBooks() {
    printf("\n--- Library Books ---\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d | Title: %s | Author: %s | Quantity: %d\n",
               books[i].id, books[i].title, books[i].author, books[i].quantity);
    }
}

// Function to search book by ID
void searchBook() {
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            printf("Book Found! Title: %s, Author: %s, Quantity: %d\n",
                   books[i].title, books[i].author, books[i].quantity);
            return;
        }
    }
    printf("Book not found!\n");
}

// Function to borrow book
void borrowBook() {
    int id;
    printf("Enter Book ID to borrow: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            if (books[i].quantity > 0) {
                books[i].quantity--;
                printf("You borrowed: %s\n", books[i].title);
            } else {
                printf("Sorry, this book is out of stock!\n");
            }
            return;
        }
    }
    printf("Book not found!\n");
}

// Function to return book
void returnBook() {
    int id;
    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            books[i].quantity++;
            printf("You returned: %s\n", books[i].title);
            return;
        }
    }
    printf("Book not found!\n");
}

// Main program
int main() {
    int choice;

    do {
        printf("\n--- Library Menu ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Borrow Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: borrowBook(); break;
            case 5: returnBook(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
