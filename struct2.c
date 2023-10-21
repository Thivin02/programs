#include<stdio.h>
struct name{
    int a;
    char b;
    float c;
};
typedef struct name Name;
void main(){
    Name f;
    scanf("%d",&f.a);
    printf("%d",f.a);
}