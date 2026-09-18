#include<stdio.h>
#include<string.h>
int main() {
    char name[100];
    printf("Enter a name: %s");
    gets(name);
    strupr(name);
    printf("\n Uppercase is: %s",name);
    return 0;
}