#include<stdio.h>
#include<stdlib.h>
#define MAX 100


int A[MAX];
int top=-1;//Empty Stack


/// <summary>
/// 入栈
/// </summary>
void Push(int x) {
	if (top == MAX - 1) {
		printf("error:full");
		return;
	}
	A[++top] = x;

}
/// <summary>
/// 出栈
/// </summary>
void Pop() {
	if (top == -1) {
		printf("error:empty");
	}
	top--;

}
/// <summary>
/// 可视化
/// </summary>
void Print() {
	printf("A[]=");
	for (int i = 0; i <= top; i++){
		printf("  %d", A[i]);
	}
	printf("\n");
	return;
}
int main() {
	Push(2);
	Push(3);
	Push(6);
	Print();
	Pop();
	Push(43);
	Print();
	return;
}
