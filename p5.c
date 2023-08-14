#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TRAINS 10
#define MAX_SEATS 50

typedef struct {
    int trainNumber;
    char trainName[50];
    int availableSeats;
    float fare;
} Train;

Train trains[MAX_TRAINS];
int numTrains = 0;

void initializeTrains() {
    trains[numTrains].trainNumber = 123;
    strcpy(trains[numTrains].trainName, "Express Train");
    trains[numTrains].availableSeats = MAX_SEATS;
    trains[numTrains].fare = 100.0;
    numTrains++;

    // Initialize more trains here
}

void displayTrains() {
    printf("Available Trains:\n");
    for (int i = 0; i < numTrains; i++) {
        printf("%d. %s (Train Number: %d) - Available Seats: %d, Fare: %.2f\n",
               i + 1, trains[i].trainName, trains[i].trainNumber, trains[i].availableSeats, trains[i].fare);
    }
}

void makeReservation(int trainIndex, int numSeats) {
    if (trainIndex >= 0 && trainIndex < numTrains) {
        if (trains[trainIndex].availableSeats >= numSeats) {
            trains[trainIndex].availableSeats -= numSeats;
            printf("Reservation successful!\n");
        } else {
            printf("Insufficient seats available.\n");
        }
    } else {
        printf("Invalid train selection.\n");
    }
}

int main() {
    initializeTrains();

    int choice;
    do {
        printf("\nRailway Reservation System\n");
        printf("1. Display Available Trains\n");
        printf("2. Make Reservation\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayTrains();
                break;
            case 2: {
                int trainIndex, numSeats;
                printf("Enter the train number (1-%d): ", numTrains);
                scanf("%d", &trainIndex);
                trainIndex--;

                if (trainIndex >= 0 && trainIndex < numTrains) {
                    printf("Enter the number of seats to reserve: ");
                    scanf("%d", &numSeats);
                    makeReservation(trainIndex, numSeats);
                } else {
                    printf("Invalid train selection.\n");
                }
                break;
            }
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

