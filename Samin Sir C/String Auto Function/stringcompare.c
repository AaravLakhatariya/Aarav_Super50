#include<stdio.h>
#include<string.h>
int main(){
    char name1[100],name2[100];
    int a;
    printf("Enter name1:");
    gets(name1);
    printf("Enter name2:");
    gets(name2);
    a = strcmp(name1,name2);
    if(a==0){
        printf("\nBoth name are equal");
    }else{
        printf("\nBoth name are different");
    }
    return 0;
}