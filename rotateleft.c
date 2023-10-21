#include<stdio.h>
void main(){
    int size,temp,timestorotate;
    scanf("%d",&size);
    scanf("%d",&timestorotate);
    int arr[size];
    for(int i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
        }
    for(int k=0;k<timestorotate;k++){
        temp=arr[0];
    for(int j=0;j<size-1;j++){
        arr[j]=arr[j+1];
    }
    arr[size-1]=temp;
    }
    for(int i=0;i<=size-1;i++){
        printf("%d ",arr[i]);
        }
    
}