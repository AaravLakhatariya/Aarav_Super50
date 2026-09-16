#include<stdio.h>
#include<conio.h>
void main()
{       int money,fhun,tohun,onhun,fifty,twty,ten,five,two,one;
	clrscr();
	printf("Enter the amount of Money: ");
	scanf("%d", &money);

	fhun = money / 500;
	money = money % 500;
	tohun = money / 200;
	money = money % 200;
	onhun = money / 100;
	money = money % 100;
	fifty = money / 50;
	money = money % 50;
	twty = money / 20;
	money = money % 20;
	ten = money / 10;
	money = money % 10;
	five = money / 5;
	money = money % 5;
	two = money / 2;
	money = money % 2;
	one = money / 1;
	money = money % 1;

	printf("\n500 : %d", fhun);
	printf("\n200 : %d ",tohun);
	printf("\n100 : %d",onhun);
	printf("\n50 : %d",fifty);
	printf("\n20 : %d",twty);
	printf("\n10 : %d",ten);
	printf("\n5 : %d",five);
	printf("\n2 : %d",two);
	printf("\n1 : %d",one);


	getch();
}