#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void Push(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = top;
    top = temp;
}
void Pop()
{
    struct Node *temp;
    if (top == NULL)
        return;
    temp = top;
    top = top->next;
    free(temp);
}
void Print()
{
    if (top == NULL)
        return;
    struct Node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    Push(5);
    Print();
    Push(8);
    Print();
    Push(11);
    Print();
    Pop();
    Print();
    Pop();
    Print();
}