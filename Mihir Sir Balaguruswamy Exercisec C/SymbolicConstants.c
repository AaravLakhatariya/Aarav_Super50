#include<stdio.h>
#define GST_RATE 0.18
int main(){
    double price;
    double total;
    double gst;
    printf("Enter a price of a Product : ");
    scanf("%lf",&price);
    gst = price * GST_RATE;
    total = price + gst;
    printf("GST: %.2lf\n",gst);
    printf("Totsl price of the product uncluding GST is: %.2lf",total);

    return 0;
}