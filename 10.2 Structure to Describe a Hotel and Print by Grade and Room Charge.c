#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char address[100];
    char grade;
    float roomCharge;
    int numRooms;
} Hotel;

void printHotel(Hotel hotel) {
    printf("Hotel Name: %s\n", hotel.name);
    printf("Address: %s\n", hotel.address);
    printf("Grade: %c\n", hotel.grade);
    printf("Room Charge: %.2f\n", hotel.roomCharge);
    printf("Number of Rooms: %d\n", hotel.numRooms);
    printf("\n");
}

void sortHotelsByRoomCharge(Hotel hotels[], int n) {
    Hotel temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (hotels[i].roomCharge > hotels[j].roomCharge) {
                temp = hotels[i];
                hotels[i] = hotels[j];
                hotels[j] = temp;
            }
        }
    }
}

void printHotelsByGrade(Hotel hotels[], int n, char grade) {
    printf("Hotels of grade %c:\n", grade);
    for (int i = 0; i < n; i++) {
        if (hotels[i].grade == grade) {
            printHotel(hotels[i]);
        }
    }
}

int main() {
    Hotel hotels[3] = {
        {"Hotel A", "123 Main St", 'A', 200.50, 50},
        {"Hotel B", "456 Elm St", 'B', 150.75, 60},
        {"Hotel C", "789 Oak St", 'A', 180.30, 80}
    };

    // Sort hotels by room charge
    sortHotelsByRoomCharge(hotels, 3);

    // Print hotels of a given grade
    char grade;
    printf("Enter hotel grade to display: ");
    scanf(" %c", &grade);
    printHotelsByGrade(hotels, 3, grade);

    return 0;
}
