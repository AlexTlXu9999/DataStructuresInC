#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* head;
void InsertAtHead(int x) {
	struct Node* temp1 = (Node*)malloc(sizeof(struct Node));
	temp1->data = x;
	temp1->next = head;
	head = temp1;
    
	return;
}
void Print1(struct Node* print) {
	if (print == NULL) {
		return;
	}
	printf("%d ", print->data);
	Print1(print->next);

}
void Print2() {
	struct Node* temp=head;
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
	InsertAtHead(7);//1,3,5,7
	Print2();
	p = head;
	Print1(p);
}
