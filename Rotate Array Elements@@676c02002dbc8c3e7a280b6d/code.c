#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n;  // Handle cases where K > N

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    
    // Step 2: Reverse the first K elements
    reverse(arr, 0, k - 1);
    
    // Step 3: Reverse the remaining elements
    reverse(arr, k, n - 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n ", arr[i]);
    }
    // printf("\n");
}

// Main function
int main() {
    int n, k;

    // Input array size
    // printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // Declaring array dynamically

    // Input array elements
    // printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input rotation value
    // printf("Enter the value of K (rotation count): ");
    scanf("%d", &k);

    // Display original array
    // printf("Original array: ");
    // printArray(arr, n);

    // Rotate the array
    rotateArray(arr, n, k);

    // Display rotated array
    // printf("Rotated array: ");
    printArray(arr, n);

    return 0;
}
