#include<stdio.h>
#include<conio.h>
void main() {
char n1[50],n2[50],n3[50],n4[50];
int i,j,len1,len2,len3,len4,a,b;
clrscr();
	printf("Enter String 1: ");
	gets(n1);
	printf("\nEnter String 2: ");
	gets(n2);
	printf("\nEnter String 3: ");
	gets(n3);
	printf("\nEnter String 4: ");
	gets(n4);
		for(i=0;n1[i]<='\0';i++){
			len1++;
		}
			for(i=0;n2[i]<='\0';i++){
			len2++;
		}
			for(i=0;n3[i]<='\0';i++){
			len3++;
		}
			for(i=0;n4[i]<='\0';i++){
			len4++;
		}
		a=len1+len2+len3+len4;
		for(j=0;j<=n1[i];j++){
		for(i=len1;n1[i]<=a;i++){
			n1[i]=n2[j],n3[j],n4[j];
		}
		}
		n1[i]='\0';
		printf("\n The concated string is %s",n1);


getch();
}