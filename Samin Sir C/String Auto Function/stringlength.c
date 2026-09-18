#include<stdio.h>
#include<string.h>
int main() {
    char name[100];
    int len;
    printf("Enter a name: ");
    gets(name);
    len = strlen(name);
    printf("\nThe length is : %d",len);

    return 0;
}