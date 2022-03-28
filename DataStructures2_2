#include<stdio.h>
#include<malloc.h>
#define OK 1
#define ERROR 0
#define MAXSIZE 100


typedef struct {
    int elem[MAXSIZE];
    int last;
}SeqList;


int Locate(SeqList L, int i)
{
    int count = 0;
    while ((count <= L.last) && (count != i)) {
        count++;
    }
    if (count <= L.last) {
        return(L.elem[count - 1]);
    }
    else {
        return(-1);
    }
}


int InsList(SeqList* L, int i, int e) //顺序表的插入运算
{
    int k;
    if ((i < 1) || (i > L->last + 2)) {
        printf("插入位置i值不合法");
        return (ERROR);
    }
    if (L->last >= MAXSIZE - 1) {
        printf("表已满，无法插入");
        return (ERROR);
    }

    for (k = L->last; k >= i - 1; k--) {
        L->elem[k + 1] = L->elem[k];
    }
    L->elem[i - 1] = e;
    L->last++;
    for (int count = 0; count < L->last; count++) {
        printf("Elem[%d] = %d\n", count, L->elem[count]);
    }
    return (OK);
}
int DelList(SeqList* L, int i, int* e)//顺序表的删除运算
{
    int k;
    if ((i < 1) || (i > L->last + 1)) {
        printf("删除位置不合法");
        printf(ERROR);
    }
    *e = L->elem[i - 1];
    for (k = i; k <= L->last; k++) {
        L->elem[k - 1] = L->elem[k];
    }
    L->last--;
    for (int count1 = 0; count1 < L->last; count1++) {
        printf("Elem[%d] = %d\n", count1, L->elem[count1]);
    }
    return (OK);
}


void main() {
    SeqList seqList1;
    seqList1.last = 5;
    seqList1.elem[0] = 1;
    seqList1.elem[1] = 3;
    seqList1.elem[2] = 5;
    seqList1.elem[3] = 7;
    seqList1.elem[4] = 9;
    printf("%d\n", Locate(seqList1, 4));
    printf("%d\n", InsList(&seqList1, 2, 2));
    int delNum;
    printf("%d\n", DelList(&seqList1, 3, &delNum));

}
