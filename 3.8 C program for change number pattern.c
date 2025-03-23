#include <stdio.h>

int main() {
    int num;


    printf("Enter a five-digit number: ");
    scanf("%d", &num);


    if (num < 10000 || num > 99999) {
        printf("Please enter a valid five-digit number.\n");
        return 1;
    }

  
    while (num > 0) {
        int digit = num % 10; 
        num /= 10;           

    
        if (digit % 2 == 0) {
            printf("%d ", digit);
        } else {
            printf("%d", digit);  
        }
    }

    printf("\n");

    return 0;
}
