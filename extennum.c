#include<stdio.h>
void main(){
    int i,j,k,len,ans,num;
    ans=0,num=0;
    char temp;
    char str[100];
    scanf("%S",str);
    for(len=0;str[len]!=0;len++);
    for(i=0;i<len;i++){
        temp=str[i];
        for(j=i+1;j<=len;j++){
            if(str[j]>='0'||str[j]<='9'){
                ans=(int)str[j];
                num=num*10+ans;
            }
            else{
                i=j;
                break;
            }
        }
        printf("%c",temp);
    }
}