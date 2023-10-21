#include<stdio.h>
int squarecheck(int temp){
    int temp1=0,flag1=0;
    for(int i=1;i<=temp;i++){
        temp1=i*i;
        if(temp1==temp){
            flag1=1;
            break;
        }
        else{
            flag1=0;
       }
    }
    if(flag1==1){
        return 1;
        }
    else   
        return 0;

    }
void main(){
    int num,temp=0,flag=0;
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++){
        temp=num/i;
        if(num%i==0){
            flag=squarecheck(temp);
        if(flag==1){
            printf("%d",i);
            break;
        }
        }
        
        else
            continue;
    }
}
