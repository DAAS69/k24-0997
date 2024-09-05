#include <stdio.h>

int main() {
	int taxrate, salary;
	float tax_to_pay, final_salary;
	printf("Please enter your tax rate[i.e if your tax rate is 15 Percent then just write 15]:");
	scanf("%d",&taxrate);
	printf("Please enter your salary:");
	scanf("%d",&salary);
	tax_to_pay = (salary*taxrate)/100; // logic to calculate tax
	final_salary = salary - tax_to_pay; // logic to final salary amount
	printf("The total tax you have to pay is:%.1f Rs\nAfter paying your taxes your salary amount will become:%.1f Rs",tax_to_pay,final_salary);

}
