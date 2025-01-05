#include <stdio.h>

// বাইনারি সার্চ ফাংশন
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid; // Target পাওয়া গেছে
        } else if (arr[mid] < target) {
            low = mid + 1; // Target ডান দিকে আছে
        } else {
            high = mid - 1; // Target বাম দিকে আছে
        }
    }
    return -1; // Target পাওয়া যায়নি
}

// মেইন ফাংশন
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70}; // শর্টেড লিস্ট
    int n = sizeof(arr) / sizeof(arr[0]);    // লিস্টের সাইজ
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
