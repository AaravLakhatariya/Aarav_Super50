#include<stdio.h>


void main()
{
    int i,len=0,j=0;
    char name[100],revname[100];

    printf("\n enter name ::");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        len++;
    }

    printf("\n len = %d",len);
  
    for(i=len-1;i>=0;i--){

    
        printf("\n The reverse = %c",name[i]);

        revname[j] = name[i];
        j++;
    }
    revname[j]='\0';

    printf("\n revname = %s",revname);
   
}