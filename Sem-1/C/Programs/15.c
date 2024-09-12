#include<stdio.h>
int main(){

    int arr[20],no,i;

    printf("\nHow Many Elements :- ");
    scanf("%d",&no);
    for(i=0;i<no;i++){
        printf("\nEnter %d element :-",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nPrinting Array Element in Reverse Order...");
    for(i=no-1;i>=0;i--){
        printf("\n%d Element is :- %d",i+1,arr[i]);
    }

    return 0;
}