#include<stdio.h>
#include<stdlib.h>

struct BSTNode {
	int data;
	struct BSTNode* left;
	struct BSTNode* right;
};
int cnt = 0;//用于统计层数。

//生成新的结点。
struct BSTNode* GetNewBST(int data) {
	struct BSTNode* NewBST=(struct BSTNode*)malloc(sizeof(struct BSTNode));
	NewBST->data = data;
	NewBST->left = NULL;
	NewBST->right = NULL;
	return NewBST;
}

//结点插入。
struct BSTNode* InsertBST(struct BSTNode* root,int x) {
	if (root == NULL) {
		root=GetNewBST(x);
//		for (int i = 0; i <= cnt; i++) {
//			printf(" ");
//		}
//		printf(" %d", root->data);
	}

	else if (x <= root->data) {
		root->left = InsertBST(root->left, x);
	//	printf("\n");
	}
	else {
		root->right = InsertBST(root->right, x);
	//	printf("\n");
	}
	cnt++;
	return root;
}

//查找
struct BSTNode* Find(struct BSTNode* root,int x) {
	if (root == NULL) {
		return printf("NULL");
	}
	else if (root->data == x) {
		return x;
	}
	else if (x <= root->data) {
		return Find(root->left,x);
	}
	else {
		return Find(root->right, x);
	}
	
}

//试图打印二叉树。(尝试中)
struct BSTNode* Print(struct BSTNode* root) {
	if (root != NULL) {
		for (int i = 0; i < cnt; i++) {
			printf(" ");
		}
		printf(" %d", root->data);
	}

}
int main() {
	struct BSTNode* root = NULL;//定义一个空树.
	int n;
	root = InsertBST(root, 10);//大概是这个样子：                   10
	root = InsertBST(root, 12);//                            
	root = InsertBST(root, 8);//                             8         12
	root = InsertBST(root, 3);//
	root = InsertBST(root, 1);//                          3     9   11    13
	root = InsertBST(root, 9);//                          
	root = InsertBST(root, 11);//                     1
	root = InsertBST(root, 13);//
	printf("键入回车以开始查找：\n");
	while (getchar() != EOF) {
		printf("请输出需要查找的值：\n");
		scanf_s("%d", &n);
		printf("值为：%c\n", Find(root, n));
	}
}
