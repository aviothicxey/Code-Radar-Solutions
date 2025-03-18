#include <stdio.h>

// Function to check if the array is sorted
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;  // Not sorted
        }
    }
    return 1;  // Sorted
}

int main() {
    int n;

    // Input: Size of the array
    // printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    // Input: Elements of the array
    // printf("%d", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isSorted(arr, n)) {
        printf("Sorted\n");
    } else {
        printf("NOT Sorted");
    }

    return 0;
}
