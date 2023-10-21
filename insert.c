#include<stdio.h>
#include<string.h>
void main(){
    int num[]={25,76,9,43,12};
    int index,size,startindex,temp;
    size=5;
    int element=num[1];
    startindex=0;
    index=0;
    for(int pass=1;pass<=size;pass++){
        for(startindex=0;startindex<=size;startindex++){
        if(element>num[startindex]){
            element=num[startindex];
            while (index>=0 && index<=startindex)
            {
                if(element<num[index]){
                    num[index]=temp;
                    element=num[index];
                    num[index]=element;
                }
                index++;
            }
            
        }
    }
    for(int ctr=0;ctr<size;ctr++){
        printf("%d ",num[ctr]);
    }
    }
    
    }