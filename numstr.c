#include<stdio.h>
void main(){
    int len,c,i,c2,j;
    c2=0;
    char str[100]="a4b5c6";
    // scanf("%s",str);
    for(len=0;str[len]!='\0';len++);
    // printf("%d",len);
    for(i=1;i<len;i+=2)
    {
        c=str[i]-'0';
        for(j=0;j<c;j++)
        printf("%d",str[c2]);
        c2+=2;
    }
}