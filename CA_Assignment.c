/*CA Assignment
Dominik Dobrowolski
25.10.2016
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int PIN=1234;	        //Default PIN
	int choice;	            //Choose which statement to run
	int confirm=PIN;	    //Check if pin entered correctly twice
	int PIN2=1234;	        //To not change the default when entered wrong in 2
	int PIN_Verify;	        //Verify password entered correctly for case1
	int Wrong_Counter=0;	//Counter for 3
	int Right_Counter=0;	//Counter for 4
		
		do
		{
			//Display menu at the beginning
			printf("1. Enter PIN and verify if it is correct \n");
			printf("2. Change your PIN \n");	
			printf("3. Display the number of times the PIN was entered (i) Successfully (ii)Incorrectly \n");
			printf("4. Exit the program \n");		
			scanf("%d",&choice);	
		
			//Error check if value is not within boundary of 1 to 4
			while((choice<0)||(choice>4))
			{
				printf("Invalid number please enter correct choice \n \n");
				printf("1. Enter PIN and verify if it is correct \n");
				printf("2. Change your PIN \n");	
				printf("3. Display the number of times the PIN was entered (i) Successfully (ii)incorrectly \n");
				printf("4. Exit the program \n");		
				scanf("%d",&choice);	
			}
				//Just to skip lines and make it neater
				printf("\n \n");
				//First case
				if(choice==1)
				{
					printf("Please enter your PIN: ");
					scanf("%d",&PIN_Verify);
					
						//Error check if the user entered his PIN wrong
						if(PIN_Verify!=PIN)//Incorrect PIN and counter
						{
							printf("\nThat is not your PIN \n \n");
							Wrong_Counter++;
						}
						if(PIN_Verify==PIN)//Correct PIN and counter
						{
							printf("\nThis is your PIN \n \n");
							Right_Counter++;
						}
				}
				//Second case
				if(choice==2)
				{
					printf("Please enter your new pin: \n");
					scanf("%d",&PIN2);
					
					printf("Please confirm your pin: \n");
					scanf("%d",&confirm);
					
					//User does not enter a 4 digit number
					while((PIN2<=999)||(PIN2>10000))
						{
							//Loop to allow the user to enter his PIN again
							printf("\n------Incorrect number, please enter a 4 digit number only------ \n \n");
							printf("Please enter your new pin: \n");
							scanf("%d",&PIN2);
							printf("Please confirm your pin: \n");
							scanf("%d",&confirm);
							
							//PIN is not the same as confirmation
							if(PIN2!=confirm)
							{
								printf("Your pin and confirmation are different, please choose again \n  \n");
							}
							else//PIN must be correct if it is not wrong
							{
								printf("Your pin has been changed \n \n");
								PIN=PIN2;
							}
                                system("cls");
						}
						//If user entered a correct value, 4 digit
						if((PIN2>999)||(PIN2<=9999))
						{
							if(PIN2!=confirm)
							{
								printf("Your pin and confirmation are different, please choose again \n  \n");
							}
							else
							{
								printf("Your pin has been changed \n \n");
								PIN=PIN2;
							}	
					
						}
				}
				if(choice==3)//Has a counter in part 2 that counts times entered
				{
					printf("\n(i)You entered the pin correct %d times",Right_Counter);
					printf("\n(ii)You entered the pin wrong %d times \n\n",Wrong_Counter);
					
				}
				if(choice==4)//Exits program 
				{
					printf("Press the Enter key to exit \n");
					getchar();
					getchar();
					return(0);
				}
	}
	while(choice==1||2||3||4);//Loops as long as these values are entered
}//end main



/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    int account_number = 0;
    int inval = 0;
    char acc_buf[256];
    printf("Please enter your 8 digit account number:\n");
    scanf("%s", acc_buf);
    if (strlen(acc_buf) == 8) {
        for (int i = 0; i < 8; i++)
            if (!isdigit(acc_buf[i])) {
                inval++;
                break;
            }
    } else inval++;
    if (!inval) {
        account_number = atoi(acc_buf);
        printf("Account #: %d\n", account_number);
    }
    return 0;
}
*/




































/*Written by Dominik Dobrowolski*/