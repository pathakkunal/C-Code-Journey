
#include <stdio.h>

int main() {
    int amount;
    
    
    printf("Enter the amount: ");
    scanf("%d", &amount);

    
    int notes_500 = 0, notes_200 = 0, notes_100 = 0, notes_50 = 0, notes_20 = 0, 
        notes_10 = 0, notes_5 = 0, notes_2 = 0, notes_1 = 0;

    if (amount >= 500) {
        notes_500 = amount / 500;
        amount = amount % 500;
    }
    if (amount >= 200) {
        notes_200 = amount / 200;
        amount = amount % 200;
    }
    if (amount >= 100) {
        notes_100 = amount / 100;
        amount = amount % 100;
    }
    if (amount >= 50) {
        notes_50 = amount / 50;
        amount = amount % 50;
    }
    if (amount >= 20) {
        notes_20 = amount / 20;
        amount = amount % 20;
    }
    if (amount >= 10) {
        notes_10 = amount / 10;
        amount = amount % 10;
    }
    if (amount >= 5) {
        notes_5 = amount / 5;
        amount = amount % 5;
    }
    if (amount >= 2) {
        notes_2 = amount / 2;
        amount = amount % 2;
    }
    if (amount >= 1) {
        notes_1 = amount / 1;
        amount = amount % 1;
    }


    printf("For the given amount, the number of notes required are:\n");
    if (notes_500 > 0) printf("500: %d\n", notes_500);
    if (notes_200 > 0) printf("200: %d\n", notes_200);
    if (notes_100 > 0) printf("100: %d\n", notes_100);
    if (notes_50 > 0) printf("50: %d\n", notes_50);
    if (notes_20 > 0) printf("20: %d\n", notes_20);
    if (notes_10 > 0) printf("10: %d\n", notes_10);
    if (notes_5 > 0) printf("5: %d\n", notes_5);
    if (notes_2 > 0) printf("2: %d\n", notes_2);
    if (notes_1 > 0) printf("1: %d\n", notes_1);

    return 0;
}
