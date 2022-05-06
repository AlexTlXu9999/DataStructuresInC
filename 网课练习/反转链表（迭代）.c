#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* head;
void Change() {
	struct Node* next, * arr, * last;
	arr = head;
	last = NULL;
	while (arr != NULL) {
		next = arr->next;
		arr->next = last;
		last = arr;
		arr = next;
	}
	head = last;
	return;
}


void Insert(int x, int n) {
	struct Node* temp1 = (Node*)malloc(sizeof(struct Node));
	temp1->data = x;
	temp1->next = NULL;
	if (n == 1) {
		temp1->next = head;
		head = temp1;
		return;
	}
	struct Node* temp2 = head;
	for (int i = 0; i < n - 2; i++) {
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}
void Print() {
	struct Node* temp = head;
	printf("List is:");
	while (temp != NULL) {
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main() {
	Insert(1, 1);
	Insert(3, 2);
	Insert(2, 1);
	Insert(5, 2);
	Insert(9, 1);
	Print();
	printf("反转后的链表为：");
	Change();
	Print();
	return 0;
}
