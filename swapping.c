#include<stdio.h>
void main(){
    int a,b;
    a=10,b=20;
    a=(a+b)-(b=a);
    printf("%d %d",a,b);
}