#define _CRT_SECURE_NO_WARNINGS 1
/*备注事项：
课本案例
*/
#include"stdio.h"
#include"stdlib.h"
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*LinkList;
LinkList main(LNode *L) {
	LNode* s; int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &x);
	int j = 0;
	while (x != 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
		j++;
		
	}
	for (int i = 0; i<j+1; i++) {
		printf("|%d|->",L->data);
		L = L->next;
	}
	printf("\n");
	
	return L;
}
