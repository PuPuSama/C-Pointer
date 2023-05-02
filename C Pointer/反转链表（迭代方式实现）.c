#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* HeadInsert(struct Node* head,int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;                //头插法
    head=temp;
    return head;
}
struct Node* TailInsert(struct Node* head,int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if (head==NULL)
    {
        head=temp;
    }                                   //尾插法
    else{
        struct Node* temp1=head;
        while (temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    return head;
}
void print(struct Node* head){
    printf("List is:");
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
struct Node* Reverse(struct Node* head){
    struct  Node *pre,*next,*cur;
    pre=NULL;
    cur=head;
    while (cur!=NULL)
    {
        next=cur->next;
        cur->next=pre;
        pre=cur;
        cur=next;
    }
    head=pre;
    return head;
}
int main(){
    struct Node* head=NULL;
    head=TailInsert(head,1);
    head=TailInsert(head,2);
    head=TailInsert(head,3);
    head=TailInsert(head,4);
    print(head);
    head=Reverse(head);
    print(head);
    system("pause");
    return 0;
}
