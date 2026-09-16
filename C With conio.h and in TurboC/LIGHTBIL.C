#include<stdio.h>
#include<conio.h>
void main()
{       float a,sum;
	clrscr();
		printf("enter the units :");
		scanf("%f",&a);
		if(a>0 && a<50){
			 sum = a*0.5;
			 printf("Total bill is : %f",sum);
		}
		else if(a>50 && a<150){
			 sum = a*0.75;
			 printf("Total bill is : %f",sum);
		}
		else if(a>150 && a<250){
			 sum = a*1.25;
			 printf("Total bill is : %f",sum);
		}
		else{
			 sum = a*1.75;
			 printf("Total bill is : %f",sum);
		}


	getch();
}