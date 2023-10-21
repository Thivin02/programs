#include<stdio.h>
typedef struct name
{
    int a[40];
    char c;
    int b;

    /* data */
}Name;

void main(){
    Name f;
    printf("%p",sizeof(f.a));

}