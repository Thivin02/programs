#include<stdio.h>
void main(){
    int len,i,j,ans;
    char str[100],temp,num;
    scanf("%s",str);
    for(len=0;str[len]!='\0';len++);
    printf("%d",len);
    temp=str[0]; 
    for(i=1;i<=len-1;i++){
        num=0;
        ans=0;               
       for(int i=0;i<=4;i++){

     if(i<=len-1&&str[i]>='0'||str[i]<='9'){
            ans=str[i]-48;
            num=num*10+ans;
        }
      
    }
     printf("%d",num);
}
       
        printf("%c",temp);

        
}
