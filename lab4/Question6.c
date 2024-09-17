#include<stdio.h>

int main(){
int billing_amount;
float discount, after_discount;
printf("Please enter your billing amount:");
scanf("%d",&billing_amount);
if (billing_amount>=500 && billing_amount<=2000){
discount = billing_amount*0.05;
after_discount = billing_amount-discount;
printf("Your original billing amount was:%d RS\nYou saved:%.1f RS\nYour amount after discount is:%.1f RS", billing_amount, discount, after_discount);

}
else if (billing_amount>2000 && billing_amount<=4000){
discount = billing_amount*0.1;
after_discount = billing_amount-discount;
printf("Your original billing amount was:%d RS\nYou saved:%.1f RS\nYour amount after discount is:%.1f RS", billing_amount, discount, after_discount);

}
else if (billing_amount>4000 && billing_amount<=6000){
discount = billing_amount*0.2;
after_discount = billing_amount-discount;
printf("Your original billing amount was:%d RS\nYou saved:%.1f RS\nYour amount after discount is:%.1f RS", billing_amount, discount, after_discount);

}
else if (billing_amount>6000){
discount = billing_amount*0.35;
after_discount = billing_amount-discount;
printf("Your original billing amount was:%d RS\nYou saved:%.1f RS\nYour amount after discount is:%.1f RS", billing_amount, discount, after_discount);

}
else if (billing_amount<500){
printf("sorry no discount");}
}
