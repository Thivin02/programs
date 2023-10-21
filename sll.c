#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

    /* data */
};
name *head=NULL,*i;
typedef struct node name;
void  sll(int n){
    name *newnode,*i;
    newnode=(name*)malloc(1*sizeof(name));
    newnode -> data=n;
    newnode -> next=NULL;

}
for( i=head;i->next!=NULL;i=i->next);
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        sll(n);
    }
}