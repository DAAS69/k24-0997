#include <stdio.h>

int main() {
	int a_to_b_distance=1207, a_to_b_fuel_price=118, b_to_a_fuel_price=123, T_fuel_cost, t_distance;
	float car_fuel_average=-1, fuel_consumed, fuel_price_for_a_b, fuel_price_for_b_a, t_fuel_price, t_fuel_consumed;
	while (car_fuel_average < 0) // loop to make sure that car_fuel_average is positive
 {
        printf("Please enter your car's fuel average: ");
        scanf("%f", &car_fuel_average);

        if (car_fuel_average < 0) // if condition to check whether the average entered is positive or not; if negative it prompts a message
{
            printf("Fuel average must be greater than 0. Please enter your Car's fuel average again\n");
        }
    }
	fuel_price_for_a_b = (a_to_b_distance/car_fuel_average)*a_to_b_fuel_price;
	fuel_price_for_b_a = (a_to_b_distance/car_fuel_average)*b_to_a_fuel_price;
	t_fuel_price = fuel_price_for_b_a + fuel_price_for_a_b;
	t_fuel_consumed = (a_to_b_distance*2)/car_fuel_average;
	printf("Total distance that you travelled is:%d km\nIn this trip your car consumed:%.1f liters of fuel.\nThe total cost for your fuel summed up to:%.1f Rs",a_to_b_distance*2,t_fuel_consumed,t_fuel_price);


}
