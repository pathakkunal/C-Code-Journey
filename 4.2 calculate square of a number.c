#include <stdio.h>

int square(int n) {
    int result = 0;
    
    
    for (int i = 0; i < n; i++) {
        result += n;
    }
    
    return result;
}

int main() {
    printf("Square of 5 is: %d\n", square(5));  
    printf("Square of 7 is: %d\n", square(7));  
    return 0;
}
