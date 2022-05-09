#include<stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

/// <summary>
/// 插入栈
/// </summary>
/// <param name="x"></param>
void Push(int x) {
	if (top !=MAX_SIZE-1 ) {
		top++;
		A[top] = x;
		return;
	}
	printf("栈满了");
}

/// <summary>
/// 删除元素
/// </summary>
/// <returns></returns>
void pop() {
	if (top > -1) {
		top--;
		return;
	}
	printf("空栈");
}

int Top() {
	return A[top];
}

void Print() {
	printf("栈：");
	for (int i = 0; i <= top; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main() {
	Push(1);
	Push(5);
	Push(6);
	Push(9);
	Print();
	pop();
	Push(99);
	Print();
}
