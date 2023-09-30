#define _CRT_SECURE_NO_WARNINGS 1
//
// Created by 10354 on 2023/9/30.
// 失败的链表，成功的练习
// 存在插入bug，插入位置必须大于正常位置。1 1 ，2 3，4 5，6 7。
//
#include "stdio.h"
#include "stdlib.h"
typedef struct Node {//折个Node指的是struct的Node
    int data;
    struct Node* next;
}Node;//这个Node指的是typedef的Node

Node* head = NULL;//定义空的头节点

void LL_Insert() {
    int x, n;//输入要存入的值与位置
    scanf("%d %d", &x, &n);
    int l = 1;//默认设置为1
    Node* Long = NULL;//用于计算链表长度
    Node* Insert = NULL;//用于插入的节点
    Node* temp = NULL;//定义一个用于存储新空间的指针
    temp = (Node*)malloc(sizeof(Node));//malloc返回值为void类型的指针，所以需要对malloc进行类型转换
    temp->data = x;//先给data存入要插入的值
    if (head == NULL) {//判断是否为空
        head = temp;//头节点现在指向temp
        temp->next = NULL;
        return;
    }
    Long = head;
    while (Long != NULL) {//当表不为空，用于计算表长
        Long = Long->next;
        ++l;
    }
    if (n >= l) {//用于判断插入位置是否合法，当不合法时，自动插入在表头
        printf("插入位置错误，已自动将其添加至表头\n");
        temp->next = head;
        head = temp;
        Long = NULL;
    }
    else {//正式插入
        temp = head;
        Insert->data = x;//这里出现了bug
        for (int s = 1; s < n - 1; s++) {
            temp = temp->next;
        }
        Insert->next = temp->next;
        temp->next = Insert;
        printf("Insert success，\nThe List is：");
    }
}
void LL_Print() {//打印当前链表
    Node* Long = NULL;
    Long = head;

    if (head == NULL) {
        printf("空链表\n");
        return;
    }
    else {
        printf("此时链表：");
        while (Long!=NULL)
        {
            printf("|%d| -->", Long->data);
            Long = Long->next;
        }
        printf("NULL");
        printf("\n");
        return;
    }
}
int main() {
    LL_Print();
    LL_Insert();
    LL_Print();
    LL_Insert();
    LL_Print();
    LL_Insert();
    LL_Print();
    LL_Insert();
    LL_Print();
}
