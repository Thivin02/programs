#include<stdio.h>
void main(){
    int a[4];
    for(int i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    int temp=a[0]*10+a[1];
    printf("%d",temp);
}