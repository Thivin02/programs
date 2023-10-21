#include<stdio.h>
void main(){
    int num1,num2;
    int res;
    scanf("%d %d",&num1,&num2);
    res=(num1>num2)?num1:num2;
    while (1)
    {
        if(res%num1==0 && res%num2==0){
            printf("%d",res);
            break;
        }
        ++res;
        /* code */
    }
    
}