#include <stdio.h>
int main() {
float ph;
printf("Enter the ph value: ");
scanf("%f", &ph);
if (ph < 7) {
if (ph > 2) {
printf("Acidic\n");} 
else {
printf("Very acidic\n");}
} 
else if (ph == 7) {
printf("Neutral\n");
} 
else {
if (ph < 12) {
printf("Alkaline\n");
} 
else {
printf("Very alkaline");
}
}
}
