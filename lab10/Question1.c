#include<stdio.h>
int i=0;
void arr_printer(int arr[4], int size);
int main(){
	int arr[100];
	int num;
	printf("Please enter the size of your array: ");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		printf("Please enter element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	arr_printer(arr,num);
}

void arr_printer(int arr[4], int size){
	
	if (i<size){
		printf("%d\n",arr[i]);
		i+=1;
		arr_printer(arr,size);
	}
	
}
