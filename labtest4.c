/*  
Written by: Dominik Dobrowolski
Compiled with Borland
Windows 10
06.04.2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Global structure template
struct bryanair
{
	int flightnumber;       
	char flightdate[12];    //Allows date to have forward slashes as format 
	char surname[20];       
	char firstname[20];     
	int seat_number;        
}person1,person2;   //Global structures considering every function will use them, 
                    //no need to pass values

//Define functionss
void input_detail();
void display_detail();

int main()
{
	printf("-----Welcome to Bryanair-----");
    
	//Didn't ask for a menu to ask the user to choose to input or display, 
    //so I just made it get input and then display it to the user after
	input_detail();//Call functions
	display_detail();
    
    //Exit program after displaying the data
    getchar();//So borland doesn't instantly close
    getchar();
    return(0);
}

void input_detail()
{
    //Begin inputting data
	printf("\n\nWhat date is the flight for the passengers? Please enter in the format dd/mm/yyyy: ");
	scanf("%s",person1.flightdate);
	
	printf("\nWhat is the flight number?: ");
	scanf("%d",&person1.flightnumber);
	
    //It's the same flight number and date for both passengers, so I ask it once and copy it into both
	strcpy(person2.flightdate,person1.flightdate);
	person2.flightnumber=person1.flightnumber;
	
	int choice1;//Allows some error checking if user input wrong information
	int choice2;
	do
	{
		printf("\n\n****Now entering detail for passenger one****\n");
		
		//Input name of passenger
		printf("\nPlease input the name of passenger one: ");	
		scanf("%s",person1.firstname);
		
		//Input surname of passenger
		printf("\nPlease input the surname of passenger one: ");
		scanf("%s",person1.surname);
		
		//Input seat number of passenger 
		printf("\nPlease input the seat number of passenger one: ");
		scanf("%d",&person1.seat_number);
		
        //Prints to the user their input data, asks them if it is correct
		printf("\n\nPassenger one details are the following:");
		printf("\nFlight number is: %d",person1.flightnumber);
		printf("\nDate of flight is: %s",person1.flightdate);
		printf("\nFirstname and surname of passenger is: %s %s",person1.firstname,person1.surname);
		printf("\nSeat number of passenger one is: %d",person1.seat_number);
		printf("\n\nAre these details correct? Input '1' if they are correct or '0' if incorrect and to re-enter: ");
		scanf("%d",&choice1);
		
	}while(choice1 != 1);
	
	do
	{
		printf("\n\n****Now entering detail for passenger two****\n");
		
		//Input name of passenger
		printf("\nPlease input the name of passenger two: ");	
		scanf("%s",person2.firstname);
		
		//Input surname of passenger
		printf("\nPlease input the surname of passenger two: ");
		scanf("%s",person2.surname);
		
		//Input seat number of passenger 
		printf("\nPlease input the seat number of passenger two: ");
		scanf("%d",&person2.seat_number);
		
        //Ask user if their info is correct again
		printf("\n\nPassenger one details are the following:");
		printf("\nFlight number is: %d",person2.flightnumber);
		printf("\nDate of flight is: %s",person2.flightdate);
		printf("\nFirstname and surname of passenger is: %s %s",person2.firstname,person2.surname);
		printf("\nSeat number of passenger one is: %d",person2.seat_number);
		printf("\n\nAre these details correct? Input '1' if they are correct or '0' if incorrect and to re-enter: ");
		scanf("%d",&choice2);
	}while(choice2!=1);
}

void display_detail()
{
		//Print the details of passenger one
		printf("\n\n-----Passenger one details are the following:-----");
		printf("\nFlight number is: %d",person1.flightnumber);
		printf("\nDate of flight is: %s",person1.flightdate);
		printf("\nFirstname and surname of passenger is: %s %s",person1.firstname,person1.surname);
		printf("\nSeat number of passenger one is: %d",person1.seat_number);
		
        //Simple menu to make it easier to see
		printf("\n*********************************************************");
		//Print the details of passenger two
		printf("\n-----Passenger two details are the following:-----");
		printf("\nFlight number is: %d",person2.flightnumber);
		printf("\nDate of flight is: %s",person2.flightdate);
		printf("\nFirstname and surname of passenger is: %s %s",person2.firstname,person2.surname);
		printf("\nSeat number of passenger one is: %d",person2.seat_number);
}
