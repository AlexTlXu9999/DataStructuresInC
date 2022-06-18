//线性表的增删改查

#include<stdio.h>
#define MAX 100

int Arr[MAX];//声明一个数组
int Last = -1;//数组的最后一个值

int main() {
	Insert(1, 3);
	Insert(2, 1);
	Insert(3, 1);
	Insert(4, 1);
	Insert(5, 1);
	Insert(6, 1);
	Insert(2, 1);
	Insert(2, 1);
}


int Insert(int x,int y) {//在数组的第y个位置前插入x

	if (Last ==-1&& y<=Last + 2) {
		Last += 1;
		Arr[Last] = x;
	}
	if (y > Last + 2) {
		printf("出错了，位置不合法\n");
		return;
	}
	if (Last == MAX - 1) {
		printf("表满，无法插入\n");
		return;
	}
	for (int i = Last; i <= Last; i++) {
		Arr[Last + 1] = Arr[Last];
		Arr[Last] = x;
	}
	Las
	printf("插入成功，此时的线性表为：");
	for (int j = 0; j <= Last; j++) {
		printf("%d", Arr[j]);
	}
	printf("\n");
	return;

}

int Del(int i) {//删除第i个位置的值
	
}

int Find1(int x) {//在线性表中查找值为x的位置

}

int Find2(int i) {//查看第i个位置的值

}
