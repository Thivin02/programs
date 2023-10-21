#include<stdio.h>
void main(){
    int size;
    scanf("%d",&size);
    int number[size];
    int ctr;
    for(ctr=0;ctr<size;ctr++){
        scanf("%d",&number[ctr]);
    }
    int pass,startindex,temp,endindex;
    endindex=size;
    for(pass=1;pass<=size;pass++){
        for(startindex=0;startindex<=endindex;startindex++){
            if(number[startindex]>number[startindex+1]){
                temp=number[startindex];
                number[startindex]=number[startindex+1];
                number[startindex+1]=temp;
            }
            endindex--;
            
        }
    }
    for(ctr=0;ctr<size;ctr++){
        printf("%d ",number[ctr]);
    }

}