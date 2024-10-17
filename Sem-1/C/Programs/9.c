// Write a C program to insert an element in an array.

#include <stdio.h>

int main() {
    int n, i, pos, element;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    
    printf("Enter the elements:\n");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &pos);
    
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter position between 1 and %d\n", n + 1);
        return -1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for(i = n; i >= pos;--i) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = element;

    printf("\n\nArray Element after Updation : [ ");
    for(i=0;i<n+1;i++){
        printf(" %d ",arr[i]);
    }
    printf(" ]");

}