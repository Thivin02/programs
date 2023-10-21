#include<stdio.h>
void main(){
    int size,count=1,i,j;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=size-2;i++){
        for(j=i+1;j<=size-1;j++){
            if(arr[i]>arr[j]){
                if(j==size-1){
                count++;
            }
            }
            else{
                break;
            }
            
        }
    }
    printf("%d",count);
}