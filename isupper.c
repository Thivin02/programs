#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char stringvalue[100],charToAppend;
    scanf("%s\n%c",stringvalue,&charToAppend);
    int index=strlen(stringvalue);
    stringvalue[index]=charToAppend;
    index++;
    stringvalue[index]='\0';
    char temp;
    int startindex=0;
    while(startindex<index){
        temp=stringvalue[startindex];
        stringvalue[startindex]=stringvalue[index];
        stringvalue[index]=temp;
        startindex++;
        index--;
    }
    printf("%s",stringvalue);
    return 0;
}