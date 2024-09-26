#include <stdio.h>
int main() {
int fat_gram;
float tcalories, c_f_f, pc;
char food[10]; // added string thing to make the program look cool ^_^
printf("Please enter your food:");
scanf("%s",&food);
printf("\nPlease enter fat grams in %s:", food);
scanf("%d",&fat_gram);
printf("\nPlease enter number of calories in your food:");
scanf("%f",&tcalories);
if ((tcalories>=0) && (fat_gram>=0)){
c_f_f = fat_gram * 9;
if (c_f_f > tcalories){
printf("oops it seems like either fat grams or calories were entered incorrectly");
}
else{
pc = (c_f_f / tcalories) * 100;
printf("percentage of calories from fat in %s is:%.1f\n", food, pc);
}
}
else{
printf("oops please make sure that calories and fat grams are not less than zero");
}
}
