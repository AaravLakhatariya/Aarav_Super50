#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,choice;
	clrscr();
	gotoxy(40,10);
	textcolor(YELLOW);
	cprintf("1---Addition");
	gotoxy(40,11);
	cprintf("\n2---Subtraction");
	gotoxy(40,12);
	cprintf("\n3---Multiplication");
	gotoxy(40,13);
	cprintf("\n4---Division");
	gotoxy(40,14);
	cprintf("\n5---Moldule");
	gotoxy(40,15);
	cprintf("\n6---Exit");
	textcolor(CYAN);
	cprintf("\nEnter your choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1: clrscr();
			gotoxy(40,12);
		       textcolor(RED);
		       cprintf("Enter a and b : ");
		       scanf("%d%d",&a,&b);
		       c=a+b;
		       cprintf("The value of %d + %d is: %d",a,b,c);
		       break;
		case 2: clrscr();
			gotoxy(40,12);
		       textcolor(RED);
		       cprintf("Enter a and b : ");
		       scanf("%d%d",&a,&b);
		       c=a-b;
		       cprintf("The value of %d - %d is: %d",a,b,c);
		       break;
		case 3: clrscr();
			gotoxy(40,12);
		       textcolor(RED);
		       cprintf("Enter a and b : ");
		       scanf("%d%d",&a,&b);
		       c=a*b;
		       cprintf("The value of %d x %d is: %d",a,b,c);
		       break;
		case 4: clrscr();
			gotoxy(40,12);
		       textcolor(RED);
		       cprintf("Enter a and b : ");
		       scanf("%d%d",&a,&b);
		       c=a/b;
		       cprintf("The value of %d / %d is: %d",a,b,c);
		       break;
		case 5: clrscr();
			gotoxy(40,12);
		       textcolor(RED);
		       cprintf("Enter a and b : ");
		       scanf("%d%d",&a,&b);
		       c=a%b;
		       cprintf("The value of %d % %d is: %d",a,b,c);
		       break;
		case 6:exit(0);
	}//end of switch
	getch();
}//end of  main