#include<stdio.h>
int main()
{
    int ar[26];
    int i;
    for (i=0;i<26;i++)
    {
        ar[i]=0;
    }
    int s;
    scanf("%d",&s);
    char str[s];
    scanf("%[^\n]",str);
    for(i=0;i<s;i++)
    {
        int k=str[i]-97;
        ar[k]++; 
    }
    return 0;
}