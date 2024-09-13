#include<stdio.h>
int main(){

 int arr[20];
    int size, i, j,count=0;

    printf("Enter size of array :- ");
    scanf("%d", &size);

    printf("Enter elements in array :- ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<size;i++){
        for(j=i+1; j<size;j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of Duplicate Elements :- %d", count);
    return 0;
}