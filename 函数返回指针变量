#include <stdio.h>
#include <stdlib.h>
//函数返回指针变量.
int *add(int* x,int* y){

    int c=(*x)+(*y);
    int *ptr=(int*)malloc(sizeof(int));
    ptr=&c;
    return ptr;
    free(ptr);
}
int main(){
    int a=2;
    int b=3;
    printf("地址%d",*(add(&a,&b)));
    system("pause");
}
