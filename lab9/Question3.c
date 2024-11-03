#include<stdio.h>
int isprime(int a);
int main(){
int num,result;
printf("Please enter the number: ");
scanf("%d",&num);
result = isprime(num);
if(result==0){
printf("Number is prime");
}
else
printf("Number is not prime");
}
int isprime(int a){
int result=0,i;
for(i=2;i<a;i++){
if(a%i==0){
result=1;
break;
}

}

return result;
}
