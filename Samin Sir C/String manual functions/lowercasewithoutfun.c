#include<stdio.h>
int main() {
    int i;
    char name1[100],name2[100];
    printf("Enter a name: ");
    gets(name2);
    for(i=0;name2[i]!='\0';i++){
        if(name2[i]>='A' && name2[i]<='Z'){
            name1[i] = name2[i]+32;
        }else{
            name1[i] = name2[i];
        }

    }
    name1[i]='\0';
    printf("\n The lowercasecase is : %s",name1);
    return 0;
}