#include<stdio.h>
int main() {
    int a=234 , b= 677 , c=888 ,d,e;
    d = a++ + ++a + ++a + ++a + ++a + ++a + ++a + a++ + a++ + a++ + ++b + ++b + b++ +  ++c + c++ + ++c + c++ + a+b+c;
    e=++a + ++b + ++c + ++d + a++ + b++ + c++;
    printf("d=%d",d);
    printf("\ne=%d",e);
    printf("\n%d\t%d\t%d\t%d\t%d\t%d",++a,++a,a++,++b,++b,++b,c++);
    return 0;

}