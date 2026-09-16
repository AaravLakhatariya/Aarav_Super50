#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Account
{
	char name[70], userName[70], password[70], securityAns[100], confirmPass[70];
	int role;// 1.Admin && 2.Passenger
}user;

FILE *fp;

void signUp();
void login();
void maskPassword(char password[]);

void main()
{
	int choice;


	while(1)
	{
		clrscr();
		printf("\n=================================================");
		printf("\n\tRAILWAY RESERVATION AUTHENTICATION ");
		printf("\n=================================================");
		printf("\n1.Sign Up (Resistor/Create New Account)");
		printf("\n2.Login");
		printf("\n3.Exit");
		printf("\nEnter from the Above Choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: signUp();
				break;

			case 2: login();
				break;

			case 3: printf("\nThank you for using our service!!!\nExiting...");
				delay(1000);
				exit(0);
				break;

			default: printf("\nInvalid choice!\n\tPlease Enter from the Above Choice.");

		}//end of switch-case

		getch();

	}//end of while

}//end of main

void signUp()
{
	int choice;
	//struct Account temp;

	printf("\nEnter Your Name : ");
	scanf(" %[^\n]",user.name);
	printf("\nCreate a Username : ");
	scanf(" %[^\n]",user.userName);

	//Comparing Password and ConformPass
	do
	{
		printf("\nCreate a Password : ");
		maskPassword(user.password);
		printf("\nComform Password : ");
		maskPassword(user.confirmPass);

		if(strcmp(user.password, user.confirmPass) != 0)
		{
			printf("\nPasswords do not Match! Try Again.\n");

		}//end of 1st if

	}while(strcmp(user.password, user.confirmPass) != 0);//end of do-while in signUp

	printf("\n1.Who is Your Favourite FootBaller?");
	printf("\n2.Which is NOT Your Favourite Movie?");
	printf("\n3.Which is Your Favourite Novel?");
	printf("\n4.Who is NOT Your Favourite Cricketer?");
	printf("\n5.What is Your Favourite Food Item?");
	printf("\nChoice a Security Question : ");
	scanf(" %d",&choice);

	switch(choice)
	{
		case 1: printf("\nWho is Your Favourite FootBaller? : ");
			scanf(" %[^\n]",user.securityAns);
			break;

		case 2: printf("\nWhich is NOT Your Favourite Movie? : ");
			scanf(" %[^\n]",user.securityAns);
			break;

		case 3: printf("\nWhich is Your Favourite Novel? : ");
			scanf(" %[^\n]",user.securityAns);
			break;

		case 4: printf("\nWho is NOT Your Favourite Cricketer? : ");
			scanf(" %[^\n]",user.securityAns);
			break;

		case 5: printf("\n5.What is Your Favourite Food Item?");
			scanf(" %[^\n]",user.securityAns);
			break;

		default: printf("\nInvalid Choice!");

	}//end of switch in signUp

	printf("\n1.Admin");
	printf("\n2.Passenger");
	printf("\nWho are You : ");
	scanf(" %d",&choice);

	switch(choice)
	{
		case 1: user.role = 1;
			break;

		case 2: user.role = 2;
			break;

		default: printf("\nInvalid Choice!");

	}//end of 2nd switch in signUp

}//end of signUp

void login()
{

	printf("\nThis Feature Is Comming Soon!!!");

}//end of login

void maskPassword(char password[])
{
	char ch;
	int i = 0;

	while(1)
	{
		ch = getch();

		if(ch == 13)
		{
			password[i] = '\0';
			break;

		}else if(ch == 8)
		{
			if(i > 0)
			{
				i--;
				printf("\b \b");

			}//end of inner if

		}else
		{
			password[i] = ch;
			i++;
			printf("*");

		}//end of else-if ladder

	}//end of while

}//end of maskPassword