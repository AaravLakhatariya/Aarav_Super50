#include<stdio.h>
#include<conio.h>
/* 15000 + 25% below    15000-25000 15%   above 25000 5% */
void main()
{       int sal,sum2,sum;
	clrscr();
		printf("Enter your Salary : ");
		scanf("%d",sal);
		printf("Your salary is: ",sal);

		if(sal>0 && sal<15000){
			sum = sal / 4;
			printf("Your bonus is : %d",sum);
		}
		else if(sal>15000 && sal<25000){
			sum = 3 / 20;
			sum2 = sal / sum;
			printf("Your bonus is : %d",sum2);
		}
		else{
			sum = sal / 20;
			printf("Your bonus is : %d",sum);
		}

	getch();
}