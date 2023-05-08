#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* pre;
    struct Node* next;
};
struct Node* head;
struct Node* GetNode(int x){
    struct Node* NewNode=(struct Node*)malloc(sizeof(struct Node));
    NewNode->data=x;
    NewNode->next=NULL;
    NewNode->pre=NULL;
    return NewNode;
}
void InsertAtHead(int x){
    struct Node* NewNode=GetNode(x);
    if(head==NULL){
        head=NewNode;
        return;
    }
    head->pre=NewNode;
    NewNode->next=head;
    head=NewNode;
}
void InsertAtTail(int x){
    struct Node* NewNode=GetNode(x);
    if(head==NULL){
        head=NewNode;
        return;
    }
    struct Node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NewNode;
    NewNode->pre=temp;
}
void Print(struct Node* p){
    if(p==NULL)return;
    printf("%d ",p->data);
    Print(p->next);
}
int main(){
    InsertAtHead(5);
    InsertAtHead(5);
    InsertAtHead(5);
    InsertAtHead(5);
    Print(head);
    system("pause");
    return 0;
}
