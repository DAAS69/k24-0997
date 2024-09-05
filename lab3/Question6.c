#include <stdio.h>

int main() {
	float x1,x2,y1,y2,gradient;
	printf("Welcome to the gradient calculator\nPlease enter the X coordinate of your first point:\n");
	scanf("%f",&x1);
	printf("Now please enter the Y coordinate of your first point:\n");
	scanf("%f",&y1);
	printf("Now please enter the X coordinate of your second point:\n");
	scanf("%f",&x2);
	printf("Now please enter the Y coordinate of your second point:\n");
	scanf("%f",&y2);
	gradient = (y2-y1)/(x2-x1);
	printf("The points you choosed were (%.1f,%.1f) and (%.1f,%.1f). The gradient(slope) for these points is:%.3f",x1,y1,x2,y2,gradient);


}
