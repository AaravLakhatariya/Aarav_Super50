#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {
	char str[30],i,str1[30];
	int len=0,j=0;
	clrscr();
	printf("Enter your string:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	for(i=len-1;i>=0;i--){
		str1[j]=str[i];
		j++;
	}
	str1[j]='\0';
	printf("\nThe reverse for string :: %s is :: %s",str,str1);
	printf("\nThe length of String:: %s:: is ::%d",str,len);
	getch();
}//ennd of moin