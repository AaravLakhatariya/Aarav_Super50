
#include<stdio.h>
#include<conio.h>
void main(){
	int x;
	float y;
	double z;
	clrscr();
	printf("\nThe size of Integers in bytes is: %d",sizeof(x));
	printf("\nThe size of Float in bytes is: %d",sizeof(y));
	printf("\nThe size of Double in bytes is: %d",sizeof(z));
	printf("\nThe size of Character in bytes is: %d",sizeof(char));
	getch();
}//end of main