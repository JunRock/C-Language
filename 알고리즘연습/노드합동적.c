//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct {
//	int data;
//	struct TreeNode *left, *right;
//}TreeNode;
//
//TreeNode *new_node(int data) {
//	TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
//	node->data = data;
//	node->left = node->right = NULL;
//	return node;
//}
//
//TreeNode *insert(TreeNode *node,int key) {
//	if (node == NULL) return new_node(key);
//	if (node->data > key)
//		node->left = insert(node->left, key);
//	else
//		node->right = insert(node->right, key);
//	return node;
//}
//
//void inorder(TreeNode *node) {
//	if (node!=NULL) {
//		inorder(node->left);
//		printf("%d ->", node->data);
//		inorder(node->right);
//	}
//}
//
//int main() {
//	TreeNode *node = NULL;
//	int key=0;
//	int sum = 0;
//	FILE *fp = fopen("data.txt", "r");
//	if (fp == NULL) {
//		printf("Error");
//		return;
//	}
//
//	while (!feof(fp)) {
//		fscanf(fp, "%d", &key);
//		node=insert(node, key);
//		sum += key;
//	}
//	printf("노드들의 합 %d", sum);
//	printf("\n");
//	inorder(node);
//
//	
//}