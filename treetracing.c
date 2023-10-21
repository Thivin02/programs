#include<stdio.h>
void fun(int n)
{
    if(n==1){
        printf("%d ",n);
    }
    else{
        printf("%d ",n);
        fun(n-1);
        fun(n-1);
    }
}
void main(){
    int n;
    n=4;
    fun(n);
}