#include<stdio.h>
void main(){
    int num,temp=0,flag=0,num1;
    scanf("%d",&num);
    num1=num;
    while(num!=0&&num!=1){
        temp=num%2;
        num=num/2;
        printf("%d",temp);
        if(temp!=0 ){
            flag=0;
            break;
    }
        else{
            flag=1;
     }
     }
     if(flag==1){
        printf("%d is a power of 2",num1);
     }
     else{
       printf("%d is not a power of 2",num1);
     }

}