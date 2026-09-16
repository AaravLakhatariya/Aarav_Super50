#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {
	char str1[30];
	char str2[30];
	char str3[30];
	clrscr();
	printf("Enter 1st string: ");
	gets(str1);
	printf("\nEnter 2nd string: ");
	gets(str2);
	printf("\nThe 1st string is: %s",str1);
	printf("\nThe 2nd string is: %s",str2);
	printf("\nThe length of 1st string is: %d",strlen(str1));
	strcat(str1,str2);
	printf("\nThe new str1 is: %s",str1);
	strrev(str2);
	printf("\nThe reverse of string 2 is: %s",str2);
	strupr(str1);
	printf("\nThe upper case of string 1 is: %s",str1);
	strlwr(str2);
	printf("\nThe lower case of string 2 is: %s",str2);
	getch();
}//end of main