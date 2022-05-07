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
void Print() {
	struct Node* print = head;
	while (print != NULL) {
		printf(" %d", print->data);
		print = print->next;
	}
	return;
}
void ReversePrint(struct Node* print) {
	if (print == NULL) {
		return;
	}
	ReversePrint(print->next);
	printf(" %d", print->data);

}
void ReversePrintForTwo(struct Node* print) {

}

int main() {
	struct Node* p;
	Insert(1, 1);
	Insert(2, 1);
	Insert(3, 1);
	Insert(5, 1);
	Insert(9, 1);//3 9 1 5 2
	Print();
	printf("\n===============\n");
	p = head;
	ReversePrint(p);
}
