#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int d, candyX = 40, candyY = 1, boxX = 37, boxY = 24, score = 0, lifeline = 3;
   char ch;
   textbackground(BROWN);
   start:

   clrscr();
	    textcolor(YELLOW);
	    gotoxy(candyX,candyY);
	    cprintf("0");
	    textcolor(BLUE);
	    gotoxy(67,1);
	    cprintf("Score = %d",score);
	    textcolor(RED);
	    gotoxy(67,2);
	    cprintf("lifeline = %d",lifeline);
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
	 candyY == 25

     )
     {
	    candyY=1;
	    d = candyX - boxX;
	    if(d==1 || d==2 || d==3 || d==4 || d==5 || d==6)
    {
	    score++;
	    sound(2000
	    );
	    delay(200);
	    nosound();
    }
    else{
	 sound(100);
	 delay(200);
	 nosound();
	 lifeline--;
	 if(lifeline == 0)
	{
	 textcolor(RED);
	 clrscr();
	 sound(50);
	 delay(500);
	 nosound();
	 gotoxy(35,13);
	 printf("Game Over!:(");
	 gotoxy(34,13);
	 printf("\n\t\tPress X to leave or any button to play again!");
	 getch();
       }
     }
  candyX = rand()%80+1;

  }
     goto start;
     delay(50);

   getch();


}