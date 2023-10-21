#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50};
    int *b=arr;
    printf("%d",*(b+1));
    printf("%d",*b+4);
}