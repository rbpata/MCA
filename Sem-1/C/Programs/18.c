#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key)
{

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return key;
        }

        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
     int n, i, key, result;

    printf("Enter the number of elements :- ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the sorted elements of the array :-\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search :- ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element found at index %d ...", result);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}