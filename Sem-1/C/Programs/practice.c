#include<stdio.h>
void leftrotate(int arr[],int d,int n){
    int i, temp[5];
    for(i=0;i<d;i++)
    {
        temp[i] = arr[i];
    }
    for(i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    for(i=0;i<d;i++){
        arr[n-d+i] = temp[i];
    }
}
void rightrotate(int arr[],int d,int n){
    int i, temp[5];
    for(i=0;i<d;i++)
    {
        temp[i] = arr[n-d+i];
    }
    for(i=n-1;i>=d;i--){
        arr[i]=arr[i-d];
    }
    for(i=0;i<d;i++){
        arr[i] = temp[i];
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
        int i;
     rightrotate(arr,3,5);
    printf("\n\nArray Element : [ ");
    for(i=0;i<5;i++){
        printf(" %d ",arr[i]);
    }
    printf(" ]");
    leftrotate(arr,3,5);

    printf("\n\nArray Element : [ ");
    for(i=0;i<5;i++){
        printf(" %d ",arr[i]);
    }
    printf(" ]");

   
    return 0;

}