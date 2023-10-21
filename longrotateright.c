#include<stdio.h>

void main(){
    int size,k;
    scanf("%d",&size);
    k=4;
    int arr[size];
    for ( int i = 0; i <size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    for(int i=size-k,j=size-1;i<j;i++,j--){
        arr[i]=(arr[i]+arr[j])-(arr[j]=arr[i]);
    }
    for(int i=0,j=size-k-1;i<j;i++,j--){
        arr[i]=(arr[i]+arr[j])-(arr[j]=arr[i]);
    }
    for(int i=0,j=size-1;i<j;i++,j--){
        arr[i]=(arr[i]+arr[j])-(arr[j]=arr[i]);
    }
    for ( int i = 0; i <size; i++)
    {
        printf("%d ",arr[i]);
    }

}