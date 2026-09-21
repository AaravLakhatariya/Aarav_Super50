#include<stdio.h>
#include<conio.h>
void main() {
	int a,b,c,d;
	clrscr();
	printf("Enter 4 numbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a%2==0 && b%2==0 && c%2==0 && d%2==0){
		printf("\nThe numbers %d %d %d %d are even",a,b,c,d);
	}
	else if(a%2==0 && b%2!=0 && c%2==0 && d%2==0){
		printf("\n%d is odd & %d %d %d are odd",b,a,c,d);
	}
	else if(a%2!=0 && b%2==0 && c%2==0 && d%2==0){
		printf("\n%d is odd & %d %d %d are even",a,b,c,d);
	}
	else if(a%2==0 && b%2==0 && c%2!=0 && d%2==0){
		printf("\n%d is odd & %d %d %d are even",c,a,b,d);
	}
	else if(a%2==0 && b%2==0 && c%2==0 && d%2!=0){
		printf("\n%d is odd & %d %d %d are even",d,a,b,c);
	}
	else if(a%2!=0 && b%2!=0 && c%2==0 && d%2==0){
		printf("\n%d %d are odd &  %d %d are even",a,b,c,d);
	}
	else if(a%2!=0 && b%2==0 && c%2!=0 && d%2==0){
		printf("\n%d %d are odd &  %d %d are even",a,c,b,d);
	}
	else if(a%2!=0 && b%2==0 && c%2==0 && d%2!=0){
		printf("\n%d %d are odd &  %d %d are even",a,d,b,c);
	}
	else if(a%2==0 && b%2!=0 && c%2!=0 && d%2==0){
		printf("\n%d %d are odd &  %d %d are even",b,c,a,d);
	}
	else if(a%2==0 && b%2!=0 && c%2==0 && d%2!=0){
		printf("\n%d %d are odd &  %d %d are even",b,d,a,c);
	}
		else if(a%2==0 && b%2==0 && c%2!=0 && d%2!=0){
		printf("\n%d %d are odd &  %d %d are even",c,d,a,b);
	}
	else if(a%2!=0 && b%2!=0 && c%2!=0 && d%2==0){
		printf("\n%d %d %d are odd & %d is even",a,b,c,d);
	}
	else if(a%2!=0 && b%2!=0 && c%2==0 && d%2!=0){
		printf("\n%d %d are odd &  %d %d are even",a,b,d,c);
	}
	else if(a%2==0 && b%2!=0 && c%2!=0 && d%2!=0){
		printf("\n%d %d are odd &  %d %d are even",b,c,d,a);
	}
	else{
		printf("\nThe numbers %d %d %d %d are odd",a,b,c,d);
	}

	getch();
}//end of main