#include<stdio.h>
#include<stdlib.h>
void main(){
    int *arr,size=5,temp;
    int timestorotate;
    scanf("%d",&timestorotate);
    arr=(int*)malloc(5*sizeof(int));
     for(int i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int k=0;k<timestorotate;k++){
        temp=arr[size-1];
    for(int j=size-1;j>0;j--){
        arr[j]=arr[j-1];
    }
    arr[0]=temp;
    }
    for(int i=0;i<=size-1;i++){
        printf("%d ",arr[i]);
    }
    
        
}