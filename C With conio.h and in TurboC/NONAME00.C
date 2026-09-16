#include<conio.h>
#include<stdio.h>
void main(){
	char name1[50]="	ndia",name2[50]="india";
	int i=0,same=1;
	clrscr();
	while(name1[i]!='\0' && name2[i]!='\0'){
		if(name1[i]==name2[i]){
			same=0;
			break;
		}//end of if
		i++;
	}//end of while
	if(same==1){
		printf("\n both string are same !!!!!" );
	} else{
		printf("\n Both string are diff.....");
	}


	getch();
}//end of main