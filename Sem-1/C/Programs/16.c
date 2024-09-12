#include<stdio.h>

int main(){
    int arr[10],even[10],odd[10];
    int i,no,even_count=0,odd_count=0;

    printf("\nHow Many Elements :- ");
    scanf("%d",&no);
    for(i=0;i<no;i++){
        printf("\nEnter %d element :-",i+1);
        scanf("%d",&arr[i]);
        if(arr[i] %2 ==0){
            even[even_count++]=arr[i];
        }
        else{
            odd[odd_count++]=arr[i];
        }
    }
    printf("Even elements :-\n");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    
    printf("\nOdd elements :-\n");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }

    
}