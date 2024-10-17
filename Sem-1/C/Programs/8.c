// Write a C program to copy all elements from an array to another array.

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int source[n], destination[n];
    
    printf("Enter the elements of the source array:\n");
    for(i = 0; i < n; ++i) {
        scanf("%d", &source[i]);
    }
    
    // Copying elements from source array to destination array
    for(i = 0; i < n; ++i) {
        destination[i] = source[i];
    }
    
    printf("Elements of the destination array are:\n");
    for(i = 0; i < n; ++i) {
        printf("%d ", destination[i]);
    }
    
    return 0;
}
