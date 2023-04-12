#include <stdio.h>
#include <stdlib.h>
//函数指针
int add(int x,int y){
    return x+y;
}
int main(){
    int (*p)(int,int);
    p=&add;
    printf("sum=%d\n",(*p)(8,8));
    system("pause");
}
