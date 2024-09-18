#include<stdio.h>
int main(){
int uc, cid;
char cn[50];
float up, bill, surcharge;
printf("please enter your customer id: ");
scanf("%d",&cid);
printf("please enter your customer name: ");
scanf(" %s",&cn);
printf("please enter the number of units you used: ");
scanf(" %d",&uc);
if (uc<=199){
up = 16.20;
}
else if (uc>=200 && uc<300){
up = 20.10;
}
else if (uc>=300 && uc<500){
up = 27.10;
}
else if (uc>=500){
up = 35.90;
}
bill = uc *up;
if (bill>=18000){
surcharge = bill * 0.15;
bill+=surcharge;
printf("You have to pay a surcharge as your bill amount exceeded 18 000\nYour surcharge amount is:%.1f\n", surcharge);
}
printf("customer ID:%d\nCustomer Name:%s\nUnits Counsumed:%d\nAmount Charged @ %.1f RS per unit\nTotal Bill:%.1f", cid, cn, uc, up, bill);
}
