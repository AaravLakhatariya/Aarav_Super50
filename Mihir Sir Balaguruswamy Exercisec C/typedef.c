#include<stdio.h>
typedef int stdid;
typedef float marks;
typedef int roll;
int main(){
    stdid id=123;
    marks marks=93.2f;
    roll i=12;
    printf("RollNo of student is: %d",i);
    printf("\nStudent id is : %d",id);
    printf("\nMarks :%.2f",marks);

    return 0;
}