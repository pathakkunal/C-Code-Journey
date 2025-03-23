
#include <stdio.h>

void twoSum(int nums[], int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);
                return; // Exit once the pair is found
            }
        }
    }
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    printf("Output: ");
    twoSum(nums1, sizeof(nums1) / sizeof(nums1[0]), target1);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    printf("Output: ");
    twoSum(nums2, sizeof(nums2) / sizeof(nums2[0]), target2);

    int nums3[] = {3, 3};
    int target3 = 6;
    printf("Output: ");
    twoSum(nums3, sizeof(nums3) / sizeof(nums3[0]), target3);

    return 0;
}










// Approach:
// Iterate through the array with the first loop.
// For each element in the array, iterate over the remaining elements (from the next index) using the second loop.
// If the sum of the current element and any other element equals the target, return their indices.