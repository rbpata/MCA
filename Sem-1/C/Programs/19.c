#include<stdio.h>

void bubbleSort(int arr[],int no){
	
	int i,j,temp;
	for(i=0;i<no-1;i++){
		for(j=0;j<no-i-1;j++){
			if(arr[j] > arr[j+1])
			{	
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
}
void bubbleSort_rev(int arr[],int no){
	
	int i,j,temp;
	for(i=0;i<no-1;i++){
		for(j=0;j<no-i-1;j++){
			if(arr[j] < arr[j+1])
			{	
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
}
int main(){
	
	int arr[20];
	int i,no;
	printf("\nHow Many Elements :- ");
	scanf("%d",&no);
	for(i=0;i<no;i++){
		printf("\nEnter %d Element :-",i+1);
		scanf("%d",&arr[i]);
	}
	
	bubbleSort(arr,no);
	
	printf("\nAfter Sorting Array Elements in Ascending order :-");
	for(i=0;i<no;i++){
		printf("\n%d Element is %d .",i+1,arr[i]);
	}
	bubbleSort_rev(arr,no);
	
	printf("\nAfter Sorting Array Elements in Descending order :-");
	for(i=0;i<no;i++){
		printf("\n%d Element is %d .",i+1,arr[i]);
	}
	return 0;
}
