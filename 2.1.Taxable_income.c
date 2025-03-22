#include <stdio.h>

int main() {
    double income, tax = 0;

   
    printf("Enter your annual taxable income: ");
    scanf("%lf", &income);

    
    if (income <= 100000) {
        tax = 0; 
    } else if (income <= 150000) {
        tax = 0.10 * (income - 100000); 
    } else if (income <= 250000) {
        tax = 5000 + 0.20 * (income - 150000); 
    } else {
        tax = 25000 + 0.30 * (income - 250000);


    printf("The tax to be paid is: Rs %.2lf\n", tax);

    return 0;
}
