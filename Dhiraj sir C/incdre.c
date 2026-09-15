#include<stdio.h>
int main() {
    int a=23 , b= 56 , c=66,d,e;
    d = ++a + ++a + ++a + ++a + ++a + ++a + a++ + a++ + a++ + ++b + b++ + ++b + ++b + b++ + ++c + c++ +a+b+c;
    e=++a + ++b + ++c +a+b+c;
    printf("d=%d",d);
    printf("\ne=%d",e);
    printf("\n%d\t%d\t%d\t%d\t%d\t%d",++a,++a,a++,++b,b++,++a,++b);
    return 0;

}