#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int binarySearch(int A[], int size, int x) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (A[mid] == x)
            return mid;
        if (A[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int A[SIZE];
    int x, index;
    printf("Array A: ");
    for (int i = 0; i < SIZE; i++) {
        A[i] = rand() % 100;
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Enter the number to search: ");
    scanf("%d", &x);
    index = binarySearch(A, SIZE, x);
    if (index != -1)
        printf("%d found at index %d\n", x, index);
    else
        printf("%d not found in the array\n", x);

    return 0;
}
