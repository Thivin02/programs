#include<stdio.h>
void main(){
    int len,i,j,ans;
    char str[100],temp;
    scanf("%s",str);
    for(len=0;str[len]!='\0';len++);
    for(i=1;i<=len;i+=2){
        ans=0;
        if(str[i]>='0'||str[i]<='9'){
            temp=str[i-1];
            ans=str[i]-48;
            
        }
        for(j=1;j<=ans;j++){
            printf("%c",temp);
}

        
}
}