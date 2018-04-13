/* 
assignment 1:
You are required to develop a program that will operate on an ATM machine for a
bank. Your program should allow bank customers to manage their PIN. The PIN is a
4-digit number. You can assume that the PIN has been initially assigned the number:1234

Dominik Dobrowolski
25.10.2016
W10
*/
#include <stdio.h.>
#include <stdlib.h>
#define SIZE 4
int main()
{
    char Choice;					//Users choice
    int Wrong_counter=0;			//Counter for Choice 3
    int Right_counter=0;			//Counter for Choice 3
    int loop=1;						//Loops infinitely
	int Array[SIZE]={1,2,3,4};		//Array for default PIN
	int Array_1[SIZE]={1,2,3,4};	//Array for PIN in option 1
	int Counter=0;					//Counter to check if PIN=User input in option 1
    int Counter2=0;					//Counter to check user input in choice 2
	int c;							//Function preventing loops and buffer input
	int NewPIN[SIZE];				//Pin for option2
	int VerifyPIN[SIZE];			//Pin for option2
    do
    {
		//Display MENU
        printf("\n1. Enter PIN and verify if it is correct \n");
		printf("2. Change your PIN \n");	
		printf("3. Display the number of times the PIN was entered (i) Successfully (ii)Incorrectly \n");			
		printf("4. Exit the program \n");		
		scanf("\n%c",&Choice);
		
		//The code basically skips all characters until the next newline is reached.
		/*
			The code introduces a while-loop. Its exit condition assigns the integer c the value that getchar() returns, 
			and checks whether it is equal to the newline character ('\n') or EOF. If it is, the loop exits. 
			If it isn't, the next character is extracted, and so on.
			The code basically skips all characters until the next newline or EOF is reached.
		*/
		while ((c = getchar()) != '\n' && c != EOF) { }
        
       
	   if(Choice=='1')
	   {
			printf("\nPlease enter your 4 digit PIN: ");
			//Input 4 digit PIN
			for(int i=0;i<SIZE;i++)
			{
				scanf("%1d",&Array_1[i]);
			}//END FOR
			//Check if PIN=User input
			for(int i=0;i<SIZE;i++)
			{
				if(Array[i]==Array_1[i])
				{
					Counter++;
				}
			}//END FOR
			
			//Check if PIN is correct
			if(Counter==4)
			{
				system("cls");//Clears screen
				printf("\nThis is your PIN\n");
				Right_counter++;
			}
			else
			{
				system("cls");
				printf("\nThis is not your PIN\n");
				Wrong_counter++;
			}
		}//END Choice 1
		
		if(Choice=='2')
		{
			printf("\nPlease enter your new 4 digit pin: ");
			//Enter user input into array
			for(int i=0;i<SIZE;i++)
			{
				scanf("%1d",&NewPIN[i]);
			}
			
			printf("\nPlease enter your new 4 digit pin again: ");
			
			//Enter user input into array
            for(int i=0;i<SIZE;i++)
			{
				scanf("%1d",&VerifyPIN[i]);
			}
			//skips all characters until the next newline is reached.

			while ((c = getchar()) != '\n' && c != EOF) { }
			
			//Compare Arrays
			for(int i=0;i<SIZE;i++)
				{
					if(NewPIN[i]==VerifyPIN[i])
					{
						Counter2++;
					}
				}
				//Counter to check if correct
				if(Counter2==4)
				{
					system("cls");
					printf(" \nYour PIN has been changed successfully\n");
					for(int i=0;i<SIZE;i++)
					{
						Array[i]=NewPIN[i];
					}
				}
				else
				{
					system("cls");
					printf("\nInvalid input. Please choose again\n");
				}

		}//END Choice 2
		
		if(Choice=='3')
		{
			system("cls");//Clear screen
			printf("\n(i)You entered the pin correct %d times",Right_counter);
			printf("\n(ii)You entered the pin wrong %d times \n\n",Wrong_counter);
		}//END Choice 3
		
		if(Choice=='4')
		{
			return(0);//Turns off program
		}//END Choice 4
   
	//Set counters to 0 again as it loops back up to allow more inputs
    Counter=0;
	Counter2=0;
	}while(loop==1);//Infinite loop, only turns off when 4 entered
}//end main