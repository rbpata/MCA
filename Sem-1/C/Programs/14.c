#include <stdio.h>

int main() {
    int n1, n2, i, j;
    printf("Enter the number of elements in the first array :- ");
    scanf("%d", &n1);
    printf("Enter the number of elements in the second array :- ");
    scanf("%d", &n2);
    
    int arr1[n1], arr2[n2], arr3[n1+n2];
    
    printf("Enter the elements of the first array :-\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the elements of the second array :-\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    
    for (i = 0, j = n1; j < n1 + n2; i++, j++) {
        arr3[j] = arr2[i];
    }
    
    printf("Merged array :-\n");
    for (i = 0; i < n1+n2; i++) {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}
