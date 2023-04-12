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
*******************************************************************
#include <stdio.h>
#include <stdlib.h>
//函数指针
int add(int x,int y){
    return x+y;
}
void printHello(char* name){        //字符串变量本质上是一个字符数组的首地址,所以应该使用指向字符数组的指针来接收，并在函数体内使用指针访问字符串
    printf("Hello! %s",name);
}
int main(){
    // int (*p)(int,int);
    // p=&add;
    // printf("sum=%d\n",(*p)(8,8));
    void (*p)(char*);
    p=printHello;
    p("Ki");
    system("pause");
}
