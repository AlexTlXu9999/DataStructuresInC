//
// Created by 10354 on 2023/9/26.
//
#include "stdlib.h"
#include "stdio.h"
#define OK 1;
#define ON 0;
//remember how 2 use the linklist
struct Link{
    int data;
    struct Link* next;
};
struct  Link* head=NULL;//the head node
struct Link *Creat(){
    struct Link *temp1;
    if (head==NULL) {
        temp1 = malloc(sizeof(struct Link));//why the temp1 is a point varible?(resolve)
    } else {
        printf("the LinkList already exist/n ");
    }
    head=temp1;
    return temp1;
}
/*int Length(){//Determine the Length of LinkList.判断表的长度
    struct Link *temp1;
    int i;
    temp1=head;
    for (i=0;temp1!=NULL;i++){
        temp1=temp1->next;
        if(temp1->next==NULL){
            printf("error/n");
        }
    }
    return i;
}*/
void Insert(int n ,int x){//fill the data "x" before n ads.在n前面插一个节点
    struct Link *temp1;//用于存放插入的节点数据
    int i;
    //Determine whether the condition is allowed.
  /*  if (head!=NULL){//判断插入位置是否合法（似乎有更优化的写法）
        if (n<=Length()) {
            temp1 = Creat();
        }
        else{
            printf("插入位置错误（多半是）/n");//这里可以优化到如果位置错误，默认插入在链表尾。
        }
    }*/
    struct Link *Find;//用于寻找位置
    Find=head;
    temp1=head;
    for(i=0;i<n;++i){
        Find=Find->next;
    }
    temp1->data=x;//插入
    temp1->next=Find->next;
    Find->next=temp1;
}


void main(){
    Creat();
    Insert(1,2);

}
