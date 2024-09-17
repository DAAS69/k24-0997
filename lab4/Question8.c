#include<stdio.h>
int main(){
int n;
printf("please enter any number from 1 to 9: ");
scanf("%d",&n);
if (n>=1 && n<=9)
	{ // curly bracket for if statement
	switch(n)
		{ // curly bracket for switch
		case 1:
			printf("One");
		break;
		case 2:
			printf("Two");
		break;
		case 3:
			printf("Three");
		break;
		case 4:
			printf("Four");
		break;
		case 5:
			printf("Five");
		break;
		case 6:
			printf("Six");
		break;
		case 7:
			printf("Seven");
		break;
		case 8:
			printf("Eight");
		break;
		case 9:
			printf("Nine");
		break;
		} // curly bracket for switch
	} // curly bracket for if statement
else if (n>9){
	printf("Greater than 9");
	}
else{
printf("invalid number");
}
}
