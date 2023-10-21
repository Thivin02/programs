#include<stdio.h>
void main()
{
    int s,i;
    int ar[100];
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&ar[i]);
    }
    count(ar,s);
}