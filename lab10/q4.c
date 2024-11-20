#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 10
typedef struct {
    char title[100];
    char author[100];
    int publication_year;
    float price;
} Book;

void displayBooks(Book books[], int count) {
    printf("\nBooks in the Library:\n");
    for (int i = 0; i < count; i++) {
        printf("Title: %s, Author: %s, Year: %d, Price: $%.2f\n",
               books[i].title, books[i].author, books[i].publication_year, books[i].price);
    }
}

void searchByTitle(Book books[], int count, const char *title) {
    int found = 0;
    printf("\nSearching for book with title: %s\n", title);
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Found: Title: %s, Author: %s, Year: %d, Price: $%.2f\n",
                   books[i].title, books[i].author, books[i].publication_year, books[i].price);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No book found with the title \"%s\".\n", title);
    }
}

void listBooksByAuthor(Book books[], int count, const char *author) {
    int found = 0;
    printf("\nBooks by author: %s\n", author);
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Title: %s, Year: %d, Price: $%.2f\n",
                   books[i].title, books[i].publication_year, books[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by the author \"%s\".\n", author);
    }
}

int main() {
    Book library[MAX_BOOKS] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99},
        {"To Kill a Mockingbird", "Harper Lee", 1960, 7.99},
        {"1984", "George Orwell", 1949, 8.99},
        {"Animal Farm", "George Orwell", 1945, 6.99},
        {"Pride and Prejudice", "Jane Austen", 1813, 5.99},
        {"Moby Dick", "Herman Melville", 1851, 9.99},
        {"The Odyssey", "Homer", -800, 12.99},
        {"War and Peace", "Leo Tolstoy", 1869, 14.99},
        {"The Catcher in the Rye", "J.D. Salinger", 1951, 10.99},
        {"Crime and Punishment", "Fyodor Dostoevsky", 1866, 11.99}
    };
    
    int bookCount = MAX_BOOKS;
    int choice;

    while (1) {
        printf("\nLibrary Menu:\n");
        printf("1. Display all books\n");
        printf("2. Search for a book by title\n");
        printf("3. List books by a specific author\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume the newline character left by scanf

        switch (choice) {
            case 1:
                displayBooks(library, bookCount);
                break;
            case 2: {
                char searchTitle[100];
                printf("\nEnter the title of the book you want to search for: ");
                getchar();
                gets(searchTitle);
                searchByTitle(library, bookCount, searchTitle);
                break;
            }
            case 3: {
                char searchAuthor[100];
                printf("\nEnter the author's name to list books by them: ");
                fgets(searchAuthor, sizeof(searchAuthor), stdin);
                getchar();
                gets(searchAuthor);
                listBooksByAuthor(library, bookCount, searchAuthor);
                break;
            }
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
