#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* head;
void InsertAtHead(int x) {
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->data = x;
	temp1->next = head;
	head = temp1;

	return;
}
/// <summary>
/// 先打印，再按顺序打印链表
/// </summary>
/// <param name="print"></param>
void Print1(struct Node* print) {
	if (print == NULL) {
		return;
	}
	printf("%d ", print->data);
	Print1(print->next);

}
/// <summary>
/// 先递归到最后一个结点，再打印链表，实现递归的反转链表。
/// </summary>
/// <param name="rev"></param>
void ReversePrint(struct Node* rev) {
	if (rev == NULL) {
		return;
	}
	ReversePrint(rev->next);
	printf("%d ", rev->data);
}
/// <summary>
/// 
/// </summary>
void Print2() {
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main() {
	struct Node* p;

	InsertAtHead(1);
	InsertAtHead(3);
	InsertAtHead(5);
	InsertAtHead(7);//7,5,3,1
	Print2();
	p = head;
	Print1(p);
	printf("\n");
	ReversePrint(p);
}
