



#include<stdio.h>
#include<conio.h>
void main()
{
	  int no1, no2, sum, sub, mul, div, choice ;
  clrscr();

	  printf("Enter no 1: ");
	  scanf("%d", &no1);

	  printf("\nEnter no 2: ");
	  scanf("%d",&no2);

	  printf("\n1 -- Addition");
	  printf("\n2 -- Subtraction");
	  printf("\n3 -- Multiplication");
	  printf("\n4 -- Division");
	  printf("\nEnter your choice: ");
	  scanf("%d", &choice);

	  switch(choice)
	  {


			 case 1: sum = no1 + no2;
				 printf("Addition is : %d",sum );
				 break;

			 case 2: sub = no1 - no2;
				 printf("Subtraction is : %d",sub);
				 break;

			 case 3: mul = no1 * no2;
				 printf("Multiplication is : %d",mul);
				 break;

			 case 4: div = no1 / no2;
				 printf("Division is : %d",div);
				 break;

			 default: printf("Enter no. from 1-4!!");
				  break;






	   }

  getch();


}