#include<stdio.h>
#include<conio.h>
void main()
{       int year;
	clrscr();
		printf("Enter the Year :");
		scanf("%d",&year);
		if(year%100==0){
			printf("It is not a leap year");
		}
	       else if(year%4==0){
			printf("It is a leap year");
		}
	       else if(year%400==0){
			printf(" A leap year");
		}
		else{
			printf("Not a leap year");
		}



	getch();

}