// Write a C program to delete an element from an array at specified position.

#include <stdio.h>

int main() {
    int n, i, pos;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements:\n");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position! Please enter position between 1 and %d\n", n);
    }

    for(i=pos-1;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;

    printf("\n\nArray Element after Deletion : [ ");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf(" ]");
    return 0;
}