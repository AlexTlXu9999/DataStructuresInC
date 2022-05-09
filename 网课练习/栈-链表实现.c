#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* top;
void Insert(int x) {
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = top;
	top = temp;
}
void Del() {
	struct Node* del = top;
	if (top == NULL) {
		return;
	}
	top = top->next;
	free(del);

}
void Print() {
	struct Node* prt = top;
	if (prt == NULL) {
		return;
	}
	printf("List is:");
	while (prt != NULL) {
		printf("%d ", prt->data);
		prt = prt->next;
	}
	printf("\n");
}
int main() {
	Insert(1);
	Insert(3);
	Insert(5);
	Insert(7);//7 5 3 1
	Print();
	Del();
	Print();
}
