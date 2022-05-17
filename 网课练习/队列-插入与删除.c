#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int first = 0;
int last = 0;

int que[MAX];
void Insert(int x) {
	if (last == 0) {
		que[last] = x;
		last++;
		return;
	}
	que[last] = x;
	last++;
}
void Del() {
	int f, l;
	f = first;
	l = last;
	que[f] = que[f+1];
}
void Print() {
	int f, l;
	f = first;
	l = last;
	printf("此时的队列为：");
	while (f < l) {
		
		printf(" %d", que[f]);
		f++;
	
	}
	return;
}
int main() {
	int x;
	printf("键入回车以开始：");
	while (getchar() != EOF) {
		printf("\n请输入插入队列的值：");
		scanf_s("%d", &x);
		Insert(x);
		Print();
	}
	while (getchar() != EOF) {
		Del();
		Del();
		Print();
	}
}
