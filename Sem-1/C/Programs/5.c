// Write a C program to find second largest element in an array.

#include<stdio.h>
int main(){
    int arr[5],i,max1,max2;
    printf("\nEnter five Elements of an array : ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    max1=max2=arr[0];

    for(i=0;i<5;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
    }

    printf("\nSecond largest element : %d",max2);
    return 0;
}