#include<stdio.h>
int main(){
	int num,i=2.0;
	float result;
	printf("Please enter any number and i will tell whether its a prime number or not: ");
	scanf("%d", &num);
	for(i; i<num; ++i){
	result = num%i;
	if ((result)==0){
	printf("number is not a prime number");
	break;
	     		}

			  }
	if (result!=0){
	printf("number is a prime number");
		      }
	
	  }
