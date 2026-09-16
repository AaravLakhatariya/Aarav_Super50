#include<stdio.h>
#include<conio.h>
void main() {
	char ch='a',ca='A';
	int i,a,b,c;
	clrscr();
	for(a=3;a<83;a++){
	for(i=0;i<25;i++){
	if(a%3==0){
		textcolor(i);
				sound(40*i);
				delay(6);
				nosound();
				gotoxy(a-3+1,i+1);
				cprintf("%c" ,ca+i);

	}
	 else if(a%3==1){
				textcolor(i);
				sound(40*i);
				delay(6);
				nosound();
				gotoxy(a-3+1,i+1);
				cprintf("%c",ch+i);
	 }
	 else if(a%3+1==1){
				textcolor(i);
				sound(40*i);
				delay(6);
				nosound();
				gotoxy(a-3+1,i+1);
				printf("%d",i);
	 }

	else {
				textcolor(i);
				sound(40*i);
				delay(6);
				nosound();
				gotoxy(a-3+1,i+1);
				cprintf( "%d",i);

	}

      }
 }


	getch();
}//end of main