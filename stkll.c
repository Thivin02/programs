#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
    /* data */
};
struct Node* head;

void Push(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->link=head;
    head=temp;
}

void Pop(){
    struct Node* temp=head;
    head=temp->link;
    free(temp);
}

void Top(){
    struct Node* temp=head;
    printf("Top element is: ");
    printf("%d ",temp->data);
    printf("\n");
}

void Print(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}

//write a function to check whether a stack is empty or not

void main(){
    head=NULL;
    Push(2);
    Push(4);
    Push(6);
    Push(8);
    Print();
    Top();
    Pop();
    Print();
}



