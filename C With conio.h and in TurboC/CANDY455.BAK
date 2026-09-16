#include <stdio.h>
#include <conio.h>
#include <dos.h>      
#include <stdlib.h>   

void main()
{
    int candy1X = 20, candy1Y = 3, box1X = 18, box1Y = 22;
    int candy2X = 60, candy2Y = 1, box2X = 58, box2Y = 22; 
    char ch;

    start:
    clrscr(); 

    textcolor(RED);
    gotoxy(candy1X, candy1Y);
    cprintf("O");

    textcolor(YELLOW);
    gotoxy(box1X, box1Y);
    cprintf("#");
    gotoxy(box1X + 7, box1Y);
    cprintf("#");
    gotoxy(box1X, box1Y + 1);
    cprintf("########");

    textcolor(LIGHTBLUE);
    gotoxy(candy2X, candy2Y);
    cprintf("O");

    textcolor(LIGHTGREEN);
    gotoxy(box2X, box2Y);
    cprintf("#");
    gotoxy(box2X + 7, box2Y);
    cprintf("#");
    gotoxy(box2X, box2Y + 1);
    cprintf("########");

    if (kbhit())
    {
        ch = getch();
        switch (ch)
        {
            case 'a': case 'A': 
                if (box1X > 1) box1X--; 
                break;
            case 'd': case 'D': 
                if (box1X < 73) box1X++; 
                break;
            case 'j': case 'J': 
                if (box2X > 1) box2X--; 
                break;
            case 'l': case 'L': 
                if (box2X < 73) box2X++; 
                break;
            case 'x': case 'X': 
                exit(0); 
                break;
        }
    }

    candy1Y++;
    candy2Y++;

    if (candy1Y == box1Y && candy1X >= box1X && candy1X <= box1X + 7) 
    {
        candy1Y = 3; 
    }
    else if (candy1Y >= 24) 
    {
        candy1Y = 3; 
    }

    if (candy2Y == box2Y && candy2X >= box2X && candy2X <= box2X + 7) 
    {
        candy2Y = 1; 
    }
    else if (candy2Y >= 24) 
    {
        candy2Y = 1; 
    }

    delay(200); 
    goto start;
}