#include<stdio.h>
#include<conio.h>
void main() {
	int i,j,k,l;
	clrscr();
	for(i=1;i<=5;i++){
		for(j=1;j<=3;j++){
			for(k=1;k<=i;k++){
				printf("*");
			}
		printf("\t");
		}
	   printf("\n");
	}

	getch();
}//end of main