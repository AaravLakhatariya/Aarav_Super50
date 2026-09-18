#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("Enter a name: %s");
    gets(name);
    strlwr(name);
    printf("\n Lowercase is: %s",name);
    return 0;
}