#include<stdio.h>
int reverse(int *arr,int start,int end){
    for(int i=start,j=end;i<j;i++,j--){
         arr[i]=(arr[i]+arr[j])-(arr[j]=arr[i]);
    }
    return (int)arr;
}
void main(){
    int size,k;
    scanf("%d",&size);
    k=4;
    int arr[size];
    for ( int i = 0; i <size; i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,size-k,size-1);
    reverse(arr,0,size-k-1);
    reverse(arr,0,size-1);
    for ( int i = 0; i <size; i++)
    {
        printf("%d ",arr[i]);
    }
}
