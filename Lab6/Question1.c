// do while loop.
#include<stdio.h>
int main(){
	int num;
	do{
	printf("Please enter a number other than zero: ");
	scanf("%d", &num);
	if (num==0){
	printf("Loop terminated as number is zero");
		   }
	  }
	while(num!=0);
	  }
