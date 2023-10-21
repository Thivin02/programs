#include<stdio.h>
void main(){
    int num[]={10,20,30,40,50};
    int *ptr;
    ptr=num;
    int count=0;
    while(count<5){
        printf("%d",*ptr);
        count++;
        ptr++;
    }
    
}