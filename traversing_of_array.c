#include <stdio.h>

int main() {
    // Initialize an array
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements in array

    // Traverse the array
    for (int i = 0; i < n; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}

