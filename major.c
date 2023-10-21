#include<stdio.h>

int major(int n,int s)
{
    if(n>=s/2)
     return 1;
    else 
     return 0;
}

void count(int ar[],int s)
{
    int  cn=1;
    int i,k=0;
    int a[s],temp;
    for(i=0;i<s;i++)
    {
        if(ar[i]==ar[i+1])
        {
            cn++;
            temp=ar[i];
            a[k]=cn*10+temp;
        }
        else
        {
            cn=0;
            k++;
        }

    }
    temp=a[0];
    for(i=1;i<k;i++)
    {
       if(temp<a[i])
         {
            temp=a[i];
         }
    }
    int n,m;
    n=temp%10;
    m=major(n,s);
    if(m==1)
      printf("%d",temp/2);
    else
      printf("not");
}
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