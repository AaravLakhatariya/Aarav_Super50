#include<stdio.h>
int main() {
    int arr[] = {15,14,13,12,11},a=0,b;
    for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(arr[j] > arr[j+1]){
                    a = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = a;
                }
            }

    }
    for(int i=0;i<5;i++){

        printf("\t%d",arr[i]);
    }
    return 0;
}