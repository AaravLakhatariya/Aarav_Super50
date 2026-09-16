#include<stdio.h>
int main() {
    char name[100],dupechar[100];
    int i,j,k=0;
    printf("Enter a name : ");
    gets(name);
    for(i=0;name[i]!='\0';i++){
        for(j=i+1;name[j]!='\0';j++){
            if(name[i]==name[j]){
                printf("\nDuplicate character found!!");
                dupechar[k]=name[i];
                k++;
                break;
            }
        }

    }
    dupechar[k]='\0';
    printf("\nDupicate character is : %s",dupechar);
    return 0;
}