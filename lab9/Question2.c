#include<stdio.h>
int swapintegers(int a, int b);
int main(){
int a,b;
printf("Please enter integer 'a' for swapping: ");
scanf("%d",&a);
printf("please enter integer 'b' for swapping: ");
scanf("%d",&b);
swapintegers(a,b);
}
int swapintegers(int a, int b){
int temp;
temp=a;
a=b;
b=temp;
printf("now a is :%d\nAnd b is :%d",a,b);

}
