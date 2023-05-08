#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
void Insert(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)head=temp;
    else{
        struct Node* temp1=head;
        while (temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
void Reverse(struct Node* p){
    if(p->next==NULL){
        head=p;
        return;
    }
    Reverse(p->next);
    p->next->next=p;
    p->next=NULL;
}
void Print(struct Node* p){
    if(p==NULL){printf("\n");return;}
    printf("%d ",p->data);
    Print(p->next);
}
int main(){
    Insert(8);
    Insert(6);
    Insert(5);
    Insert(2);
    Print(head);
    Reverse(head);
    Print(head);
    system("pause");
    return 0;
}
