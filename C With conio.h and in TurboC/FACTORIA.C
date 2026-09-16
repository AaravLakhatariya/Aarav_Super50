#include<stdio.h>
#include<conio.h>
//int factorial(int no);
void main()
{
	int num, result;
	clrscr();

	printf("\nEnter a Number : ");
	scanf("%d",&num);

	result = factorial(num);

	printf("\nFactorial of %d : %d",num,result);

	getch();

}//end of main

int factorial(int no)
{
	if(no == 0)
	{
		return 1;

	}//end of if

	return no * factorial(no - 1);

}//end of factorial