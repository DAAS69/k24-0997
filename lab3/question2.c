#include <stdio.h>

int main() {
	int num1, num2, temp;
	printf("please enter number1: ");
	scanf("%d", &num1);
	printf("please enter number2: ");
	scanf("%d", &num2);
	temp = num1; 
	num1 = num2;
	num2 = temp;
	printf("I swapped the values of numbers. Now\nNumber1:%d\nNumber2:%d", num1, num2);

}
