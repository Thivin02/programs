#include<stdio.h>
#include<string.h>
void main(){
    int len,i,j,count,flag=0;
    char str[100];
    scanf("%[^\n]s",str);
    for(len=0;str[len]!='\0';len++);
    for(i=0,j=len-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            flag=1;
            break;
        }
        if(isalnum(str[i])){
            printf("%c",str[i]);
            break;
        }
    }
    if(flag==0)
    {
        printf("Pallindrome");
    }
    else{
        printf("Not a pallindrome");
    }
}