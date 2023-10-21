#include<stdio.h>
void main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int res,ans;
    int lcm;
    res=(num1>num2)?num1:num2;
    while(1){
        if(res%num1==0 && res%num2==0){
            lcm=res;
            ans=(num1*num2)/lcm;
            break;
        }
        ++res;
    }
    printf("%d",ans);
}