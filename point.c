#include<stdio.h>
void main(){
    int x=100,y=100;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("%d %d ",*ptr1,*ptr2);
}