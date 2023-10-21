#include<stdio.h>
void main(){
    int a,*b,**c;
    a=10;
    b=&a;
    c=&b;
    printf("%d %d",c,&b);
}