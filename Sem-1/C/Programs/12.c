#include<stdio.h>
int main(){

 int arr[20];
    int size, i, j,isUnique;

    printf("Enter size of array :- ");
    scanf("%d", &size);

    printf("Enter elements in array :- ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<size;i++){
        isUnique = 1; 
        for(j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique = 0;
                break;
            }
        }
        if(isUnique){
            printf("\n%d is Unique Member!!",arr[i]);
        }
    }
    return 0;
}