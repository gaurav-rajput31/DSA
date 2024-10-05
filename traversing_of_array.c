#include <stdio.h>

int main() {
    int size;

    // declare size by user 
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    //loop to input array index data by user 
    for (int y = 0; y < size; y++) {
        printf("Enter element at index %d: ", y);
        scanf("%d", &arr[y]);  
    }

    // Loop to print the elements of the array 
    for (int y = 0; y < size; y++) {
        printf("Element at index %d: %d\n", y, arr[y]);
    }

    return 0;
}
