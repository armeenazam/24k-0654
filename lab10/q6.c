#include <stdio.h>
#include <string.h>

// Define structure to store information about a travel package
typedef struct {
    char packageName[50];
    char destination[50];
    int duration;  // Duration in days
    float cost;    // Cost per person
    int seatsAvailable; // Number of seats available
} TravelPackage;

// Function to display available travel packages
void displayPackages(TravelPackage packages[], int size) {
    printf("\nAvailable Travel Packages:\n");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("Package Name: %s\n", packages[i].packageName);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: $%.2f\n", packages[i].cost);
        printf("Seats Available: %d\n", packages[i].seatsAvailable);
        printf("----------------------------------------------------------\n");
    }
}

// Function to book a travel package
void bookPackage(TravelPackage packages[], int size) {
    char packageName[50];
    int numSeats;
    printf("Enter the package name you want to book: ");
    scanf(" %[^\n]", packageName);  // Read package name (with spaces)

    // Find the package by name
    for (int i = 0; i < size; i++) {
        if (strcmp(packages[i].packageName, packageName) == 0) {
            if (packages[i].seatsAvailable > 0) {
                printf("Enter the number of seats you want to book: ");
                scanf("%d", &numSeats);

                // Check if enough seats are available
                if (numSeats <= packages[i].seatsAvailable) {
                    packages[i].seatsAvailable -= numSeats;
                    printf("Booking successful! You have booked %d seat(s) for the %s package.\n", numSeats, packages[i].packageName);
                    return;
                } else {
                    printf("Not enough seats available. Only %d seats left.\n", packages[i].seatsAvailable);
                    return;
                }
            } else {
                printf("Sorry, no seats are available for the %s package.\n", packages[i].packageName);
                return;
            }
        }
    }

    // If the package is not found
    printf("Package with name '%s' not found.\n", packageName);
}

int main() {
    // Create an array of travel packages
    TravelPackage packages[] = {
        {"Tropical Paradise", "Hawaii", 7, 1200.50, 20},
        {"European Escape", "Paris", 10, 2500.75, 15},
        {"Desert Adventure", "Dubai", 5, 900.30, 30},
        {"Mountain Trek", "Switzerland", 12, 2200.00, 5}
    };
    int numPackages = sizeof(packages) / sizeof(packages[0]);

    int choice;

    do {
        // Display menu
        printf("\nTravel Package Booking System\n");
        printf("1. View Available Packages\n");
        printf("2. Book a Package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayPackages(packages, numPackages);
                break;
            case 2:
                bookPackage(packages, numPackages);
                break;
            case 3:
                printf("Exiting the system. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
