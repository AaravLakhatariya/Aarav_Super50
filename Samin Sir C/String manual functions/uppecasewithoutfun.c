#include<stdio.h>
int main() {
    int i;
    char name1[100],name2[100];
    printf("Enter a name: ");
    gets(name1);
    for(i=0;name1[i]!='\0';i++){
        if(name1[i]>='a' && name1[i]<='z'){
            name2[i] = name1[i]-32;
        }else{
            name2[i] = name1[i];
        }

    }
    name2[i]='\0';
    printf("\n The uppercase is : %s",name2);
    return 0;
}