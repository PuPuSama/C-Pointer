#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* Insert(struct Node* head,int data){
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
    return head;
}
void Print(struct Node* head){
    if(head==NULL)return;
    Print(head->next);//反向遍历
    printf("%d ",head->data);
    /*printf("%d ",head->data);
    Print(head->next);//正向遍历*/
}
int main(){
    struct Node* head=NULL;
    head=Insert(head,8);
    head=Insert(head,6);
    head=Insert(head,5);
    head=Insert(head,2);
    Print(head);
    system("pause");
    return 0;
}
