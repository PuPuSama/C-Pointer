#include <stdio.h>
#define Max_Size 101
int A[Max_Size];
int top = -1;
void Push(int x)
{
    if (top == Max_Size - 1)
    {
        printf("Error:Stack is full!");
        return;
    }
    A[++top] = x;
}
void Pop()
{
    if (top == -1)
    {
        printf("Error:Stack is null!\n");
        return;
    }
    top--;
}
int Top()
{
    return (A[top]);
}
void Print()
{
    for (int i = 0; i < top + 1; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main()
{
    Pop();
    Push(5);
    Print();
    Push(8);
    Print();
    Push(9);
    Print();
    Pop();
    Print();
    return 0;
}