#include<stdio.h>
#include<math.h>
struct space {
	int x;
	int y;
};
float distance_calculator(struct space points[]);
int main(){
	struct space points[2];
	for(int i=0;i<2;i++){
		printf("Please enter the x coordinate of point %d: ",i+1);
		scanf("%d",&points[i].x);
		printf("Please enter the y coordinate of point %d: ",i+1);
		scanf("%d",&points[i].y);
	}
	float distance = distance_calculator(points);
    printf("The distance is: %.2f",distance);
}
float distance_calculator(struct space points[]){
	float square = (((points[1].x)-(points[2].x))+((points[1].y)-(points[2].y)));
	return sqrt(square);
}
 
