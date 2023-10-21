#include<stdio.h>
void main(){
    int hash[26]={0};
    char str[100];
    scanf("%[^\n]s",str);
   for(int i=0;i<100;i++)
    {
    
        if(str[i]!=' ')
        {
            hash[str[i]-97]++;
        }
    }
    for(int i=0;i<=25;i++){
        printf("%d ",hash[i]);
    }
}