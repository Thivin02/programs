    //enquue -> add elements at tail
    //dequeue -> removes elements at head
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Enqueue(int x){
    struct Node* temp1 =(struct Node*)malloc(sizeof(struct Node));
    temp1->data=x;
    temp1->next=NULL;
    if(head==NULL){
        head=temp1->next;
        head=temp1;
        return;
    }
    struct Node* temp2 = head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
    // head=temp1;

}

void Dequeue(){
    struct Node* temp =head;
    head= temp->next;
    free(temp);
}

void Print(){
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}





void main(){
    head=NULL;
    Enqueue(2);
    Enqueue(4);
    Enqueue(6);
    Enqueue(8);
    Print();
    Dequeue();
    Print();
}