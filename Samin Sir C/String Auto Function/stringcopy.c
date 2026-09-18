#include<stdio.h>
#include<string.h>
int main() {
    char name[100],cname[100];
    printf("Enter a name: ");
    gets(name);
    strcpy(cname,name);
    printf("\n The copy is: %s",cname);
    return 0;
}