#include<stdio.h>
#include<conio.h>
void main()
 {
	  int choice ;
  clrscr();

	  printf("\n1 -- January");
	  printf("\n2 -- Febuary");
	  printf("\n3 -- March");
	  printf("\n4 -- April");
	  printf("\n5 -- May");
	  printf("\n6 -- June");
	  printf("\n7 -- July");
	  printf("\n8 -- August");
	  printf("\n9 -- September");
	  printf("\n10 -- Octber");
	  printf("\n11 -- November");
	  printf("\n12 -- December");
	  printf("\nEnter your choice: ");
	  scanf("%d", &choice);

	  switch(choice)
	  {


			 case 1: printf("31");
				 break;

			 case 2: printf("28/29");
				 break;

			 case 3: printf("31");
				 break;

			 case 4: printf("30");
				 break;

			 case 5: printf("31");
				 break;

			 case 6: printf("30");
				 break;

			 case 7: printf("31");
				 break;

			 case 8: printf("31");
				 break;

			 case 9: printf("30");
				 break;

			 case 10: printf("31");
				 break;

			 case 11: printf("30");
				 break;

			 case 12: printf("31");
				 break;

			 default: printf("Enter no. from 1-12!!");
				  break;






	   }

  getch();


}