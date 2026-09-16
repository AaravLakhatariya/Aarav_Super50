#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	clrscr();
	printf("\n Enter the value of A, B,C : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a%2==0 && b%2==0 && c%2==0){
		printf("%d,%d and %d all are even");
	}
	else if(a%2!=0 && b%2!=0 && c%2!=0){
		printf("%d,%d and %d all are odd");
	}

	else if(a%2!=0 && b%2==0 && c%2==0){
		printf("%d is odd and %d and %d are even");
	}


	else if(a%2==0 && c%2!=0 && b%2==0){
		printf("%d is even and %d is odd and %d is also even");
	}
	else if(a%2==0 && b%2==0 && c%2!=0 ) {
		printf("%d,%d are even and %d is odd");
	}
	getch();
}//end of main


