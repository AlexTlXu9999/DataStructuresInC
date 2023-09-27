//
// Created by 10354 on 2023/9/26.
/*线性表-Linklist
 * 初始化，增删改查，求长度，判断空表，销毁表
 * LinkList
 * AddEl
 * DelEl
 * RevEl
 * FindEl_Ads
 * FindEl_Data
 * LengthEl
 * BlankEl
 * DesEl*/
#include "stdio.h"
#include "stdlib.h"

//typedef 类似与更名，给struct一个新的命名，从此可以直接使用新命名来生成变量
typedef struct LinkList {//定义一个结构体
    int data;
    struct LinkList *next;//next是指向节点的指针，所以next存储的是下一个节点的地址
}Link;
typedef Link LL;
//注意，这里的LinkList，Link，LL所生成的变量全是上文中结构体的类型
void Link1() {
    int step1 = (*LinkList)malloc(sizeof(LinkList));


}
void main(){

}

