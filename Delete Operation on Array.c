#include <stdio.h>

// Function to remove an element 'x' from the array 'arr'
// n: Current size of the array (number of elements)
// x: The element to be removed
// capacity: Capacity of the array (maximum number of elements it can hold)
// Returns the updated size of the array after removal
int remove_element(int arr[], int n, int x, int capacity) {
    int i;

    // Find the index of the element to remove
    for (i = 0; i < n; ++i) {
        if (x == arr[i]) {
            break;
        }
    }

    // If the element is not found in the array, return the original size
    if (i == n) {
        return n;
    }

    // Shift elements to the left to fill the gap created by the removal
    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }

    return n - 1; // Return the updated size of the array
}

// Function to print the elements of an array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {1, 2, 3, 4};
    int size = 4; // Current size of the array (number of elements)
    int capacity = 5; // Capacity of the array

    printf("Original array: ");
    print_array(arr, size);

    int x;
    printf("Enter the element to remove: ");
    scanf("%d", &x);

    // Call the remove_element function to remove 'x' from the array
    size = remove_element(arr, size, x, capacity);

    printf("Array after removal: ");
    print_array(arr, size);

    return 0;
}