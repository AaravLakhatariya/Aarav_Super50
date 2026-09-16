#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {
	char str[30],ch[30];
	int i, count=0,count1=0,a,b=0;
	clrscr();
	printf("Enter a string : ");
	gets(str);
	printf("\nwhich char u want to see no of repeating: ");
	gets(ch);
	for(a=0;a<(ch);a++){
	for(i=0;i<strlen(str);i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
			count++;
		}else{
			count1++;
		}
	}
		b++;
	}
	printf("\n%s",str);
	printf("\nThe no of Volwels are %d",count);
	printf("\nThe no of Consonents are %d",count1);
	getch();