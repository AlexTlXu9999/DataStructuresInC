#include<stdio.h>
typedef struct LNode* List;
struct LNode {
	int Data;
	List Next;
};
struct Lnode L;
List Ptrl;
//求表长（链表遍历）
int Length(List Ptrl) {
	List p = Ptrl;
	int j = 0;
	while (p) {//链表未结束，即p指针！=NULL
		p = p->Next;//每一次循环后p的值等于Next，当循环完最后一个，Next==NULL；
		j++;
	}
	return j;
}
//查找(遍历 )
//(1)按序号查找
List FinfKth(int k,List Ptrl){
	List p = Ptrl;
	int i = 1;
	while (i< k && p != NULL) {
		p = p->Next;
		i++;
	}
	if (i == k) {//找到k元素返回
		return p;
	}
	else
		return NULL;
}
//（2）按值查找
List Find(int x, List PtrL) {
	List p = PtrL;
	while (p != NULL && p->Data != x) {
		p = p->Next;
	}
	return p;
}
//插入(插入需要知道前一个的结点的位置)
//(1)先构造一个新结点，用s指向（构造新节点就需要再申请一块动态空间）
//找到链表的第i-1个结点，用p指向
//修改指针，插入结点（p之后插入新的s结点）p->next=s ;s->next=p->next
List Insert(int x, int i, List PtrL) {
	List p, s;
	if (i == 1) {//插入新结点在表头需要特殊处理
		s = (List)malloc(sizeof(struct LNode));//申请结点，装填结点。
		s->Data = x;
		s->Next = PtrL;
		return s;

	}
	p = FindKth(i - 1, PtrL);
	if (p == NULL) {//判断i值是否合理
		printf("不存在");
		return NULL;
	}
	else {
		s = (List)malloc(sizeof(struct LNode));//申请结点
		s->Data = x;//装填结点
		s->Next = p->Next;//s先往后指，与下句位置不能交换
		p->Next = s;//i-1指针指向s
		return PtrL;
	}
}
//删除
List Delete(int i, List PtrL) {
	List s, p;
	if (i == 1) {
		s = PtrL;
		if (PtrL != NULL) {
			PtrL = PtrL->Next;
		}
		else
			return NULL;
		frss(s);
		return PtrL;
	}
	p = FindKth(i - 1, PtrL);
	if (p == NULL) {
		printf("第%d个结点不存在", i - 1);
		return NULL;
	}
	else if (p->Next == NULL) {
		printf("第%D个结点不存在", i);
		return NULL;
	}
	else {
		s = p->Next;
		p->Next = s->Next;
		free(s);
		return PtrL;
	}
}
