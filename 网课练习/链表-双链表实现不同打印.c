#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};
struct Node* head;
void Insert(int x, int n) {
	int cnt1, cnt2;
	cnt1 = cnt2 = 0;
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->data = x;
	temp1->next = NULL;
	temp1->prev = NULL;
	if (head == NULL) {
		head = temp1;
		return;
	}
	else if (n == 1) {
		head->prev = temp1;
		temp1->next = head;
		head = temp1;
		return;
	}
	struct Node* temp2 = head;
	struct Node* temp3 = head;
	while (cnt1 < n&&temp2!=NULL) {
		cnt1++;
		temp2 = temp2->next;
	}
	while (cnt2 < n - 1&&temp3!=NULL) {
		cnt2++;
		temp3 = temp3->next;
	}
	temp2->prev = temp1;
	temp1->next = temp2;
	temp3->next = temp1;
	temp1->prev = temp3;
}
/// <summary>
/// 用于实现常规打印链表
/// </summary>
void Print() {
	printf("通过普通方式实现链表打印：");
	struct Node* print = head;
	while (print != NULL) {
		printf(" %d", print->data);
		print = print->next;
	}
	printf("\n");
	return;
}

/// <summary>
/// 实现反转链表
/// </summary>
/// <param name="print"></param>
void ReversePrint(struct Node* print) {
	printf("反转链表，递归实现：");
	if (print == NULL) {
		return;
	}
	ReversePrint(print->next);
	printf(" %d", print->data);

}

/// <summary>
/// 实现双链表反转打印
/// </summary>
/// <param name="print"></param>
void ReversePrintForTwo(struct Node* print) {
	printf("双链表反转打印 ：");



	printf("\n");
}

int main() {
	struct Node* p;
	Insert(1, 1);
	Insert(2, 1);
	Insert(3, 1);
	Insert(5, 1);
	Insert(9, 1);//9 5 3 2 1 
	Print();
	p = head;
	ReversePrint(p);
}
