#include <stdio.h>

int countBitsToFlip(int A, int B) {
    // XOR of A and B will give the positions where the bits differ
    int xorResult = A ^ B;
    
    // Count the number of 1's in the XOR result
    int count = 0;
    while (xorResult) {
        count += xorResult & 1;  // Increment count if the least significant bit is 1
        xorResult >>= 1;  // Right shift xorResult to check the next bit
    }
    
    return count;
}

int main() {
    int A = 10, B = 20;
    printf("Number of bits to flip to convert %d to %d: %d\n", A, B, countBitsToFlip(A, B));  // Output: 4
    
    A = 7, B = 10;
    printf("Number of bits to flip to convert %d to %d: %d\n", A, B, countBitsToFlip(A, B));  // Output: 3
    
    return 0;
}
