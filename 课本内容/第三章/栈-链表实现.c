//链表形式实现栈的插入删除，从链表尾部操作，将结果进行打印
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* Next;
};

struct Node* head;//链表头部
struct Node* top;//栈顶
int cnt = 0;//尾插，用于统计个数；


/// <summary>
/// 插入实现
/// </summary>
/// <param name="x"></param>
void Push(int x) {
	cnt++;
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->Next = NULL;
	if (head == NULL) {//判断是否为空
		head = temp;
		top = temp;
	}
	top->Next = temp;
	top = temp;
}

/// <summary>
/// 删除
/// </summary>
void Pop() {
	struct Node* temp = head;
	for (int i = 0; i < cnt-1 ; i++) {//全局变量cnt用于记录倒数第二个链表
		temp = temp->Next;
	}
	struct Node* temp2;
	temp2 = top;
	top = temp;
	free(temp2);
	top->Next = NULL;
	cnt--;
}

/// <summary>
/// 打印栈
/// </summary>
void Print() {
	struct Node* temp = head;

	while (temp!= NULL) {
		printf(" %d", temp->data);
		temp = temp->Next;
	}
	printf("\n");
}


int main() {
	Push(1);
	Push(2);
	Push(4);
	Push(9);
	Print();
	Pop();
	Print();
}
