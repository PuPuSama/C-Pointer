#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
void insert(int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void delete(int n){
    struct node* temp=head;
    if(n==1){
        head=temp->next;
        free(temp);
        return;       //删除特定位置
    }
    for(int i=0;i<n-2;i++){
        temp=temp->next;
    }
    struct node* temp1=temp->next;
    temp->next=temp1->next;
    /*
    while (temp->data!=n)
    {
        temp=temp->next;
    }
    struct node* temp3=head;            //删除特定值
    while (temp3->next!=temp)
    {
        temp3=temp3->next;
    }
    temp3->next=temp->next;
    free(temp);*/
}
void print(){
    struct node* temp = head;
    printf("list is ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    insert(4);
    insert(3);
    insert(5);
    insert(6);
    print();
    delete(3);
    print();
    system("pause");
    return 0;
}
