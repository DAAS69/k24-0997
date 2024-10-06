/* the following code determines whether a number is an armstrong number or not
*/
#include<stdio.h>
#include<math.h>
int main(){
int counter,count=0,num,sum,check,lastdigit,toad,another_check;
printf("please enter any number and i will tell whether its an armstrone number or not:");
scanf("%d",&num);
check=num;
another_check= num;
while(num>0){
count++;
num=num/10;
}
counter=count;
for(counter;counter>0;counter--){
lastdigit = check%10;
check=check/10;
sum = pow(lastdigit,count);
toad+=sum;
}
if(toad==another_check){
printf("%d is an armstrong number",another_check);
}
else
printf("it is not an armstrong number");
}
