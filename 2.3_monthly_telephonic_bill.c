#include <stdio.h>

int main() {
    int total_calls;
    double bill = 0;


    printf("Enter the total number of calls made in a month: ");
    scanf("%d", &total_calls);

    
    if (total_calls <= 50) {
        bill = 100;  
    } else if (total_calls <= 100) {
       
        bill = 100 + 0.80 * (total_calls - 50);
    } else if (total_calls <= 200) {
        
        bill = 100 + 0.80 * 50 + 0.60 * (total_calls - 100);
    } else {
        
        bill = 100 + 0.80 * 50 + 0.60 * 100 + 0.40 * (total_calls - 200);
    }


    printf("The total telephonic bill for %d calls is: Rs %.2lf\n", total_calls, bill);

    return 0;
}
