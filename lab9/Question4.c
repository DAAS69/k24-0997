#include<stdio.h>
int calculate(int a,int b,char oper);
int main(){
int num,num2,result;
char oper;
printf("Please enter the first number: ");
scanf("%d",&num);
printf("Please enter the second number: ");
scanf("%d",&num2);
printf("Please enter the operation to perform: ");
scanf(" %c",&oper);
result = calculate(num,num2,oper);
printf("The result is: %d",result);

}
int calculate(int a,int b,char oper){
int result=0,i;
switch(oper){

case '-':
result = a - b;
break;

case '+':
result = a + b;
break;

case '*':
result = a*b;
break;

case '/':
result = a/b;
break;

default:
printf("Invalid operator");
}
return result;
}
