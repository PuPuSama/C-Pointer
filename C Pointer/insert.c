#include <stdlib.h>
#include <stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x){
    Node* temp=(Node*)malloc(sizeof(int));
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL)temp->next=head;
    head=temp;
};
void Print(){

};
int main(){
    head=NULL;
    printf("How many numbers dou you wang to insert?");
    int x,i,n;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the number:")
        scanf("%d",x);
        insert(x);
        Print();
    }
    
   
    system("pause");
}
