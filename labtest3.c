#include <stdio.h>
#define SIZE 3

float change_to_Euro(float[]);
float change_to_Dollar(float[]);

int main()
{
	float my_array[SIZE];
	float average = 0;
	int selection = 0;
	int i;
	
	
	do
	{
		printf("Please select a currency to convert.\n");
		printf("Press 1 for Euro conversion into Dollars.\n");
		printf("Press 2 for Dollar conversion into Euros.\n");
		printf("Press 3 to end the program.\n");
		scanf("%d", &selection);
		
		if (selection == 1)
		{
			printf("Please enter three amounts in Euro.\n");
			for (i=0; i<SIZE; i++)
			{
				scanf("%f", &my_array[i]);
			}
			average = change_to_Dollar(my_array);
			printf("The average of the three converted currencies is %.2f Dollars\n\n", average);
		}
		else if (selection == 2)
		{
			printf("Please enter three amounts in Dollar.\n");
			for (i=0; i<SIZE; i++)
			{
				scanf("%f", &my_array[i]);
			}
			average = change_to_Euro(my_array);
			printf("The average of the three converted currencies is %.2f Euros\n\n", average);
		}
		else if (selection != 1 && selection != 2 && selection !=3)
		{
			printf("***Option not available. Please choose a valid option***\n\n");
		}
		else if (selection == 3)
		{
			printf("Thank you for using the currency converter!\n");
			return(0);
		}
	} while(selection !=3);
	return(0);
}

float change_to_Dollar(float my_converted_array[])
{
	int i;
	float average;
	float dollar = 1.08;
	
	for (i=0; i<SIZE; i++)
	{
		printf("%.2f Euros is converted to %.2f Dollars\n", my_converted_array[i], (my_converted_array[i]* dollar));
	}
	
	average = ((my_converted_array[0] + my_converted_array[1] + my_converted_array[2]) *dollar) / 3;
	return (average);
	
}


float change_to_Euro(float my_converted_array[])
{
	int i;
	float average;
	float euro = 0.92;
	
	for (i=0; i<SIZE; i++)
	{
		printf("%.2f Dollars is converted to %.2f Euros\n", my_converted_array[i], (my_converted_array[i]* euro));
	}
	
	average = ((my_converted_array[0] + my_converted_array[1] + my_converted_array[2]) *euro) / 3;
	return (average);
	
}

