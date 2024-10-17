// Write a C program to create/read and print elements of array

#include<stdio.h>
int main(){
    int arr[5],i;
    printf("\nEnter five Elements of an array : ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\nArray Element : [ ");
    for(i=0;i<5;i++){
        printf(" %d ",arr[i]);
    }
    printf(" ]");
    return 0;
}