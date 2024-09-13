#include <stdio.h>

void leftRotate(int arr[], int n, int d) {
    int temp[d];
    int i;
    for ( i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    
    for ( i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    
    for ( i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

void printArray(int arr[], int size) {
    int i;
	for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, d;
    int i;
    printf("Enter the number of elements in the array :- ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array :-\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to rotate :- ");
    scanf("%d", &d);
    
    leftRotate(arr, n, d);
    
    printf("Array after %d left rotations :-\n", d);
    printArray(arr, n);
    
    return 0;
}