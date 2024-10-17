// Write a C program to count total number of even and odd elements in an array.

// Write a C program to create/read and print elements of array

#include<stdio.h>
int main(){
    int arr[5],i;
    int odd=0,even=0;
    printf("\nEnter five Elements of an array : ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++){
        if(arr[i] == 0){
            continue;
        }
        else if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("\nOdd ELements : %d ",odd);
    printf("\nEven ELements : %d ",even);
    

    return 0;
}