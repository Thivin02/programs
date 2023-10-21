#include<stdio.h>
void main(){
    int num[]={122,17,93,3,36};
    int element=num[1];
    int index=0;
    int search=index+1;
    for(int count=1;count<=5;count++){
        while(search!=0 && element<num[search-1]){
            num[search]=num[index];
            search--;
        }
        num[search]=element;
        element=num[count];
        
    }
    for(int ctr=0;ctr<5;ctr++){
        printf("%d ",num[ctr]);
    }
}
