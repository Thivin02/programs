#include<stdio.h>
void main(){
    int num,flag=0,temp=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        temp=i*i*i;
        if(temp==num){
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==1){
        printf("Perfect Cube");
    }
    else{
        printf("Not a perfect cube");
    }
}