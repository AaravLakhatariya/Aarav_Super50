#include<stdio.h>
int main() {
    int cur,total;
    printf("Enter amount of money:");
    scanf("%d",&cur);

    total = cur / 100;

    printf("\nTotal notes of 100 rupees is = %d",total);
   
    cur = cur - (total*100);
 
    total = cur / 50;
    printf("\nTotal notes of 50 rupees is = %d",total);
    
     cur = cur - (total*50);

    total = cur / 20;
    printf("\nTotal notes of 20 rupees is = %d",total);
    
    cur = cur - (total*20);

    total = cur / 10;
    printf("\nTotal notes of 10 rupees is = %d",total);
    
    cur = cur - (total*10);

    total = cur / 5;
    printf("\nTotal notes of 5 rupees is = %d",total);
    
    cur = cur - (total*5);

    total = cur / 1;
    printf("\nTotal notes of 1 rupees is = %d",total);
    
     cur = cur - (total*1);
 
    printf("\nThe remaining amount is: %d",cur);
     return 0;
}