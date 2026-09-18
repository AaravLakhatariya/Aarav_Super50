#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("Enter a name: %s");
    gets(name);
    strrev(name);
    printf("\n Reverse is: %s",name);
    return 0;
}