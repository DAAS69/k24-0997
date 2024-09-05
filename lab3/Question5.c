#include <stdio.h>

int main() {
	int principal_amount=0, interest_rate=0, time_period=0;
	float simple_interest;
	while (principal_amount < 100 || principal_amount > 1000000)  // loop to make sure that principal_amount is between 100 and 1,000,000
{
        printf("Please enter your principal amount (between 100 and 1,000,000): ");
        scanf("%d", &principal_amount);

        if (principal_amount < 100 || principal_amount > 1000000) 
{
            printf("Principal amount must be greater than 100 and less than 1,000,000\n");
        }
    }
		
	while (interest_rate < 5 || interest_rate > 10)  // loop to make sure that interest_rate is between 5 and 10
{
        printf("Please enter your interest_rate (between 5 and 10): ");
        scanf("%d", &interest_rate);

        if (interest_rate < 5 || interest_rate > 10) 
{
            printf("interest rate must be between 5 and 10\n");
        }
    }
	while (time_period < 1 || time_period > 10)  // loop to make sure that time_period is between 1 and 10
{
        printf("Please enter your time period (between 1 and 10): ");
        scanf("%d", &time_period);

        if (time_period < 1 || time_period > 10) 
{
            printf("time period must be between 1 and 10\n");
        }
    }
	simple_interest = principal_amount*time_period*interest_rate;
	printf("Your interest amount will be:%.1f Rs",simple_interest);


}
