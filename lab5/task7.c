#include <stdio.h>
int main() {
int number;
printf("please enter any number: ");
scanf("%d", &number);
(number % 10 == 0) ? printf("Last Digit is Zero\n") : printf("Last Digit is Non-Zero\n");
}
