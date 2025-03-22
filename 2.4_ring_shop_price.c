#include <stdio.h>

int main() {
    int choice, engraved_units;
    double total_cost = 0.0;
    

    printf("Select the type of ring:\n");
    printf("1. Gold Plated Ring\n");
    printf("2. Solid Gold Ring\n");
    printf("3. Silver Plated Ring\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
    

    printf("Enter the number of engraved units: ");
    scanf("%d", &engraved_units);
    

    switch (choice) {
        case 1: 
            total_cost = 500 + (engraved_units * 70.30);
            break;
        case 2:
            total_cost = 1000 + (engraved_units * 10.40);
            break;
        case 3: 
            total_cost = 300 + (engraved_units * 5.10);
            break;
        default:
            printf("Invalid choice.\n");
            return 1; 
    }
    
    
    printf("The total cost of the ring is: Rs %.2lf\n", total_cost);
    
    return 0;
}
