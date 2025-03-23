#include <stdio.h>

const char* is_power_of_two(int n) {
    if (n <= 0)
        return "No";
    if (n & (n - 1)) 
        return "No";
    else
        return "Yes";
}

int main() {
    printf("%s\n", is_power_of_two(4));  
    printf("%s\n", is_power_of_two(42)); 
    printf("%s\n", is_power_of_two(1));  
    return 0;
}
