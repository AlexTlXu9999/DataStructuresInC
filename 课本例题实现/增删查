#include<stdio.h>

#define MAXSIZE 100
typedef struct LNode* List;//声明一个指向LNode的指针类型 List
struct LNode {
	int Data[MAXSIZE];
	int Last;
};
struct LNode L;//声明一个线性表L
List PtrL;//定义一个指针PtrL

List MakeEmpty() {//建立一个空顺序表
	List PtrL;
	PtrL = (List)malloc(sizeof(struct LNode));//malloc为动态内存分配函数，数组中的每一个元素的类型为struct LNode，返回指针
	PtrL->Last = -1;//最后一个元素
	return PtrL;
}
int Find(int X,List PtrL) {//查找,通过 List PtrL得知目标线性表，X为查找的位置，即下标。
	int i = 0;
	while (i <= PtrL->Last && PtrL->Data[i] != X) {//第一个数的下标<=最后一个数&&从第一个数开始与参数X进行比较，如果不相等，则i++
		i++;
	}
	if (i > PtrL->Last) {//找不到这个值
		return -1;
	}
	else//返回i，即为需要查找的元素的位置。
		return i;
}
void Insert(int X, int i, List PtrL) {//插入
	int j;
	//判断表满情况
	if (PtrL->Last == MAXSIZE - 1) {
		printf("表满了");
		return;
	}
	if (i<1 || i>PtrL->Last + 2) {//这里考虑到要后移元素以及插入新元素，所以为+2
		printf("位置错误");
	}
	for (j = PtrL->Last; j >= i - 1; j--) {
		PtrL->Data[j + 1] = PtrL->Data[j];
	}
	PtrL->Data[i] = X;
	PtrL->Last++;
}
void Delete(int X, int i, List PtrL) {
	int j;
	if (PtrL->Last <= MAXSIZE - 100) {
		printf("无元素");
	}
	if (i<1 || i>PtrL->Last) {
		printf("位置不对");
	}
	for (j=i;j<=PtrL->Last; j++) {
		PtrL->Data[j] = PtrL->Data[j + 1];
	}
	PtrL->Last;
	return;
}
