#include<stdio.h>

void sorting(int arr[],int no){	
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

int main(){
	int arr[20],odd[20],even[20];
	int i,no,evencount=0,oddcount=0;
	printf("\nHow Many Elements :- ");
	scanf("%d",&no);
	for(i=0;i<no;i++){
		printf("\nEnter %d Element :-",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<no;i++){
		if(arr[i]%2==0){
			even[evencount++]=arr[i];
		}
		else{
			odd[oddcount++]=arr[i];
		}
	}
	sorting(even,evencount);
	printf("\n\nPrinting the Even SORTED array :-");
	for(i=0;i<evencount;i++){
		printf("\t%d",even[i]);
	}
	sorting(odd,oddcount);
	printf("\n\nPrinting the ODD SORTED array :-");
	for(i=0;i<oddcount;i++){
		printf("\t%d",odd[i]);
	}
	return 0;
}
