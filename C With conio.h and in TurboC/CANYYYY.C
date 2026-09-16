#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int d, candyX = 40, candyY = 1, boxX = 37, boxY = 24;
   char ch;
   textbackground(BROWN);
   start:

   clrscr();
	    textcolor(YELLOW);
	    gotoxy(candyX,candyY);
	    cprintf("0");
	    textcolor(BLUE);
	    textcolor(0);
	    gotoxy(boxX,boxY);
	    cprintf("#");

	    gotoxy(boxX+7,boxY);
	    cprintf("#");
	    gotoxy(boxX,boxY+1);
	    cprintf("########");
   if(kbhit())
   {
	    ch = getch();
	    switch(ch)
	    {
		case 'a' : boxX--;
			 break;
		case 'A' : boxX--;
			 break;
		case 'd' : boxX++;
			 break;
		case 'D' : boxX++;
			 break;
		case 'x' : exit(0);
			 break;
		case 'X' : exit(0);
			 break;

	    }

   }
     candyY++;
     delay(200);
     if (
	 candyY == 25;



     )
     }
