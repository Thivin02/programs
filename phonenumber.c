#include<stdio.h>
void main(){
    char phone[10];
    scanf("%s",phone);
    for(int i=0;i<=9;i++){
        if((phone[i]==phone[i+1])&&(phone[i]==phone[i+2])&&(phone[i]==phone[i+3])){
            printf("Double %c double %c",(char)phone[i]);
            i+=3;
        }
        else if((phone[i]==phone[i+1])&&(phone[i]==phone[i+2])){
            printf("Triple %c",(char)phone[i]);
            i+=2;
        }
        else if((phone[i]==phone[i+1])){
            printf("Double %c ",phone[i]);
            i+=1;
        }
        else{
            printf("%c",phone[i]);
        }

    }
    

}