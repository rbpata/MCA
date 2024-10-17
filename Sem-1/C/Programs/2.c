// Write a C program to count total number of negative elements in an array

#include<stdio.h>

int main(){

    int arr[] = {1,-2,3,-24,5};
    int negative=0,i;

    for(i=0;i<sizeof(arr)/sizeof(arr[1]);i++){
        if (arr[i] < 0){
            negative+=1;
        }
    }
    // printf("%d", sizeof(arr)/sizeof(arr[1]));
    printf("total negative : %d", negative);


    return 0;
}
