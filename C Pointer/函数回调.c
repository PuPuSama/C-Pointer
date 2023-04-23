#include <stdio.h>
#include <stdlib.h>
int compar(int a,int b){
    if(abs(a)>abs(b))return 1;
    else return -1;
}
int bubblesort(int* A,int n,int (*compare)(int,int)){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(compare(A[j],A[j+1])>0){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main(){
    int a[8]={8,3,-9,8,4,5,6,-1};
    bubblesort(a,8,compar);
    for (int i = 0; i < 8; i++)
    {
        printf(" =%d=",a[i]);
    }
    
    system("pause");
    return 0;
}
