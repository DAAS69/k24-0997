#include<stdio.h>
int main(){
	int num,i=2.0,j=1,k=0,x;
	float result;
	printf("Please enter any number and i will tell whether its a prime number or not: ");
	scanf("%d", &num);
	for(i; i<num; ++i){
	result = num%i;
	if ((result)==0){
	printf("number is not a prime number\n");
	break;
	     		}

			  }
	if (result!=0){
	printf("number is a prime number\n");
	while(k<num){
	printf("%d", k);
	x = k + j;
	k = j;
	j = x;

	       }
		      }
	
	  }
