#include<stdio.h>
#include<string.h>
void main(){
    int num[]={25,76,9,43,12};
    int pass,size,startindex,temp;
    size=5;
    for(pass=1;pass<=size;pass++){
        for(startindex=0;startindex<=size;startindex++){
            if(num[startindex]>num[startindex+1]){
                temp=num[startindex];
                num[startindex]=num[startindex+1];
                num[startindex+1]=temp;
            }
        }
    }
    for(int ctr=0;ctr<size;ctr++){
        printf("%d ",num[ctr]);
    }
}