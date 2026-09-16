#include<stdio.h>
#include<conio.h>
void main() {
	int a=211,b=443,c=555,d,e;
	clrscr();
	d= ++a + ++a + a++ + a++ + ++b + b++ + ++c + c++ +a+b+c;

	e= ++a + ++b + ++c + d++ + ++d;
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d",++a,a++,++b,b++,++c,c++,e++);

   getch();
}//end of main