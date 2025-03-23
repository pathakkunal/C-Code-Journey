#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

 
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    
    if (n >= 1) {
        printf("Fibonacci Series: %lld", first);
    }
    if (n >= 2) {
        printf(", %lld", second);
    }

    
    for (i = 3; i <= n; i++) {
        next = first + second; 
        printf(", %lld", next);
        first = second;  
        second = next;   
    }

    printf("\n"); 
    return 0;
}
