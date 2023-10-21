#include<stdio.h>
#include<string.h>
#include<math.h>
void main(){
    int num[]={10,20,30,40,50};
    int *ptr=num;
    int length=5;
    int counter=0;
    while(counter<length){
        printf("%d ",*ptr);
        ptr++;
        counter++;
    }
    
}