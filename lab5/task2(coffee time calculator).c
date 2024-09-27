#include <stdio.h>
int main() {
int coffee_size, made_by;
char coffee_choice;
float total_time;
printf("What type of coffee would you want? Press 'B' for black or 'W' for white\n");
scanf(" %c", &coffee_choice);
printf("What is your cup size? Press '1' for double or '0' for single\n");
scanf("%d",&coffee_size);
printf("How would you like your coffee to be made? press '1' for manually or '0' for automatic.\n");
scanf("%d", &made_by);
if (made_by) {
printf("Manual preparation started.\n");} 
else {
printf("Automatic preparation started.\n");}
switch(coffee_choice){
case 'B':
case 'b':
printf("put water: 20 mins\nSugar: 20 mins\nMix well: 25 mins\nAdd coffee: 15 mins\nMix well: 25 mins\n");
total_time = 105;
break;
case 'W':
case 'w':
printf("put water: 15 mins\nSugar: 15 mins\nMix well: 20 mins\nAdd coffee: 2 mins\nAdd milk: 4 mins\nMix well: 20 mins\n");
total_time = 76 ;
break;
default:
printf("please enter a valid chracter from the choice given above");
}
total_time = (coffee_size) ? (total_time * 1.5) : total_time;  // Increase time for double size
printf("Total time:%.1f", total_time);
}
