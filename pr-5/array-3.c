#include<stdio.h>

void rightRotate(int arr[], int n, int rotations) {
    for (int i = 0; i < rotations; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, rotations;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &rotations);

    printf("Original Array: ");
    displayArray(arr, n);

    rightRotate(arr, n, rotations);

    printf("Right Rotated Array: ");
    displayArray(arr, n);

    return 0;
}
