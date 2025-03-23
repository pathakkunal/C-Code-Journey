#include <stdio.h>
#include <stdlib.h>

void threeSum(int nums[], int numsSize) {
    // Sort the array to simplify the search for triplets
    qsort(nums, numsSize, sizeof(int), compare);
    
    // Iterate through the array
    for (int i = 0; i < numsSize - 2; i++) {
        // Skip duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        
        // Use two pointers to find the other two elements
        int left = i + 1, right = numsSize - 1;
        
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if (sum == 0) {
                // Print the triplet
                printf("[%d, %d, %d]\n", nums[i], nums[left], nums[right]);
                
                // Skip duplicates for the second and third elements
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                
                // Move both pointers after printing a valid triplet
                left++;
                right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
}

// Compare function for qsort to sort the array
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    printf("Output: \n");
    threeSum(nums, numsSize);
    
    return 0;
}





// Explanation of the Code:
// Sorting: The array is sorted using qsort. Sorting helps in easily identifying duplicates and ensures that we can use the two-pointer technique efficiently.
// Iterating Through the Array: The first loop iterates over each element nums[i]. We skip duplicate elements for the first element to avoid repeating triplets.
// Two-pointer Technique: For each nums[i], we use two pointers, left starting from i+1 and right starting from the end of the array. We compute the sum of nums[i], nums[left], and nums[right].
// If the sum is zero, we print the triplet.
// If the sum is less than zero, move the left pointer to the right (to increase the sum).
// If the sum is greater than zero, move the right pointer to the left (to decrease the sum).
// Skipping Duplicates: After finding a valid triplet, we skip duplicate values by moving the pointers over duplicate elements.
// Output: The triplets are printed in the form [a, b, c]