#include<stdio.h>
#include<math.h>
#define MAX 100
// P36 习题1 4.

int demo1() {//使用了求幂函数
	int a[MAX];
	int x;
	int P=0;
	int cnt = 0;//定义计数器，用于表示x指数
	printf("输入x的值\n");
	scanf_s("%d", &x);
	printf("输入系数ai的值\n");
	while (cnt < MAX) {
		scanf_s("%d", &a[cnt]);
		P= a[cnt] * pow(x,cnt)+P;
		printf("P(x)的值为：%d\n", P);
		cnt++;
	}
	return 0;
}

int demo2() {//未使用幂函数，但是有bug
	int a[MAX];
	int x;
	int P = 0;
	int Px = 0;
	int cnt = 0;//定义计数器，用于表示x指数
	printf("输入x的值\n");
	scanf_s("%d", &x);
	printf("输入系数ai的值\n");
	while (cnt < MAX) {
		scanf_s("%d", &a[cnt]);
		for (int i = 0; i < cnt; i++) {
			x *= x;
		}
		P = a[cnt] * x + P;
		printf("P(x)的值为：%d\n", P);
		cnt++;
	}
	return 0;
}

int main() {
	demo1();
}
