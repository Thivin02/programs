#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
    /* data */
};
struct Node* head;
struct Node* GetNewnode(int x){
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    Newnode->data = x;
    Newnode->prev = NULL;
    Newnode->next = NULL;
    return Newnode;
}
void InsertatHead(int x){
   struct Node* Newnode = GetNewnode(x);
   if(head==NULL){
    head=Newnode;
    return;
   }
   head->prev=Newnode;
   Newnode->next=head;
   head=Newnode;
}

void InsertatTail(int x){
    struct Node* Newnode = GetNewnode(x);
    if(head==NULL){
        head=Newnode;
        return;
    }
    struct Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=Newnode;
    Newnode->prev=temp;
}

void Print(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void RevPrint(){
    struct Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
}
void main(){
    InsertatTail(2);
    InsertatTail(4);
    InsertatTail(6);
    InsertatTail(8);
    Print();
    RevPrint();
}