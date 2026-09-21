#include<stdio.h>
#include<string.h>
int main() {
    char name[100],name2[100];
    int a;
    printf("Enter a name:");
    gets(name);
    strcpy(name2,name);
    strrev(name);
    a = strcmp(name,name2);
    if(a==0){
        printf("The word is PALLINDROME!!");
    }else{
        printf("The word is not pallindrome");
    }

    return 0;
}