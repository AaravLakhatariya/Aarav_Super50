#include<stdio.h>
#include<conio.h>
void main() {
	int a,b,c;
	clrscr();
	printf("Enter 2 nos:");
	scanf("%d%d",&a,&b);
	c=a>b?1:0;
	printf("\n the value of c is : %d",c);

	getch();
}//end of main