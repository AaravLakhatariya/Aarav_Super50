/*

				Name: Aarav Lakhatariya
				DOC: 15th September 2026
				Email: aaravlakhatariya@gmail.com
				Objective: To make a game on Strait Of Hormuz

	* *  *  *
	 *Trump* -->Boat with Crude Oil & if it steps on landmine by Iran for Donald Trump the the game will be over!!
	  *****
	   _
	  | |
	  | | --> this is the torpido which will shoot on the boat
	  \-/
*/
#include<stdio.h>
#include<conio.h>
void main() {
	int boatX=40,boatY=22,i,lifeline=3,score=0,bombX=40,bombY=2,a;
	char ch;

	clrscr();
	textcolor(RED);
	gotoxy(24,1);
	cprintf("This is a Strait Of Hormuz game");
	gotoxy(1,2);
	cprintf("\nTo set the difficulty 1 means hardest and 500 means easiest and to leave press 0");
	cprintf("\nEnter the diffulcity: ");
	scanf("%d",&a);
	switch(a){
		case 0:exit(0);
	}
	getch();
	start:
	clrscr();
	textbackground(BLUE);
	textcolor(RED);
	gotoxy(1,1);
	cprintf("Score::%d",score);
	textcolor(RED);
	gotoxy(1,2);
	cprintf("Lifeline::%d",lifeline);
	textcolor(BLACK);
	gotoxy(boatX,boatY);
	cprintf("*  *  *  *");
	gotoxy(boatX+1,boatY+1);
	cprintf("*Trump*");
	gotoxy(boatX+2,boatY+2);
	cprintf("*****");
	if(kbhit()){
		ch = getch();
		switch(ch){
			case 'a':if(boatX>18){
				 boatX--;
				 }
				 break;
			case 'A':if(boatX>18){
				 boatX--;
				 }
				 break;
			case 'd':if(boatX<47){
				 boatX++;
				 }
				 break;
			case 'D':if(boatX<47){
				 boatX++;
				 }
				 break;
			case 'w':if(boatY>1){
				 boatY--;
				 }
				 break;
			case 'W':if(boatY>1){
				 boatY--;
				 }
				 break;
			case 's':if(boatY<22){
				 boatY++;
				 }
				 break;
			case 'S':if(boatY<22){
				 boatY++;
				 }
				 break;
			case 'x':exit(0);
			case 'X':exit(0);
		}//end of switch



	}//end of if
	gotoxy(bombX+1,bombY-1);
	printf("_");
	gotoxy(bombX,bombY);
	printf("| |");
	gotoxy(bombX,bombY+1);
	printf("| |");
	gotoxy(bombX,bombY+2);
	printf("\\_/");
//--------------------------------------------
	gotoxy(20-5,1);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,2);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,3);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(21-5,4);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,5);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,6);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(21-5,7);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,8);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(21-5,9);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(22-5,10);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(21-5,11);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,12);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(19-5,13);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(18-5,14);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(19-5,15);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,16);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(21-5,17);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,18);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(21-5,19);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,20);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,21);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(21-5,22);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(20-5,23);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(19-5,24);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(21-5,25);
	textcolor(GREEN);
	cprintf("|");
//-------------------------------------------------------------------
	gotoxy(60,1);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,2);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,3);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(61,4);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,5);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,6);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(61,7);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,8);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(61,9);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(62,10);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(61,11);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,12);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(59,13);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(58,14);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(59,15);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,16);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(61,17);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,18);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(61,19);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,20);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,21);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(61,22);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(60,23);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(59,24);
	textcolor(GREEN);
	cprintf("|");

	gotoxy(61,25);
	textcolor(GREEN);
	cprintf("|");
//------------------------------------------------------------
	bombY++;
	i=bombX-boatX;
	if(bombY==23){
	if(i>=1 & i<=11){
		lifeline--;
		sound(20);
		delay(100);
		nosound();
		if(lifeline==0){
		clrscr();
		gotoxy(40,10);
		printf("Trump Died!");
		printf("\n\t\t\tMission Failed!");
		printf("\n\t\t\tGame Over!!");
		printf("\n\t\t\tYour last score was: %d",score);
		printf("\n\t\t\tPress 0 to exit: ");
		scanf("%d",&i);
		switch(i){

			case 0: exit(0);
		}
		}
	}

		bombY=1;
		if(bombX>=21){
		bombX=rand()%47+1;

		}else{
			bombX=40;
		}
	}

	if(boatY==1){
		boatY=25;
		score++;
		sound(300);
		delay(100);
		nosound();
	}
	textcolor(RED);
	gotoxy(20,2);
	cprintf("Iran is attaking!!");
	textcolor(YELLOW);
	gotoxy(20,1);
	cprintf("This is a game on Strait Of Hormuz");
	gotoxy(61,2);
	cprintf("Save the Trump!!!");
	gotoxy(61,3);
	cprintf("Go to top to");
	gotoxy(61,4);
	cprintf("increase the score!");

	delay(a);
	goto start;
}//end of main
