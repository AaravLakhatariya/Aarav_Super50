#include<stdio.h>
#include<conio.h>
void main()
{       int no1,no2,no3;
	clrscr();
	printf("Enter no. 1: ");
	scanf("%d",&no1);
	printf("Enter no. 2: ");
	scanf("%d",&no2);
	printf("Enter no. 3: ");
	scanf("%d",&no3);
	if (no1 > no2 && no1 > no3)
	{
	 printf("No. 1 is Graterest ");
	}
	else if (no2 > no1 && no2 > no3)
	{
	 printf("No. 2 is Graterest ");
	}
	else
	{
	 printf("No. 3 is Graterest ");
	}


	getch();
}