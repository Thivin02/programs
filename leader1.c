#include<stdio.h>
void main()
{
    int size,count,j;
    scanf("%d",&size);
    int arr[size];
    int i;
    j=0;
    count=1;
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=arr[size-1];
    for(i=size-2;i>=0;i--)
    {
       if(arr[i]>j)
       {
        count++;
        j=arr[i];
       }
    }
    printf("%d",count);
}