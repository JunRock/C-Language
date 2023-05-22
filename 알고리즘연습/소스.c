//#include<stdio.h>
//#include<stdlib.h>
//typedef int element;
//typedef struct TreeNode {
//	element data;
//	struct TreeNode* left, *right;
//}TreeNode;
//
//
//int MAX(int a, int b) {
//	if (a >= b)
//		return a;
//	else
//		return b;
//	return 1;
//}
//int get_height(TreeNode* node) {
//	int height = 0;
//	if (node != NULL) {
//		height = 1 + max(get_height(node->left), get_height(node->right));
//	}
//	return height;
//}
//
//int get_leaf_count(TreeNode* node) {
//	int count = 0;
//	if (node != NULL) {
//		if (node->left == NULL && node->right == NULL)
//			return 1;
//		else
//			count = get_leaf_count(node->left) + get_leaf_count(node->right);
//	}
//	return count;
//}
//
//void insert_node(TreeNode** root, element key) {
//	TreeNode* p, *t, *n;
//	t = *root;
//	p = NULL;
//	while (t != NULL) {
//		if (key == t->data) return;
//		p = t;
//		if (key < p->data)
//			t = p->left;
//		else
//			t = p->right;
//	}
//
//	n = (TreeNode*)malloc(sizeof(TreeNode));
//	if (n == NULL)
//		return;
//
//	n->data = key;
//	n->left = n->right = NULL;
//
//	if (p != NULL) {
//		if (key < p->data)
//			p->left = n;
//		else
//			p->right = n;
//	}
//	else
//		*root = n;
//}
//
//int power(int a) {
//	int i, result = 1;
//	for (int i = 0; i < a; i++) {
//		result *= 2;
//	}
//	return result;
//}
//
//int max_num(TreeNode* node) {
//	int max = 0;
//	while (node->right != NULL) {
//		node = node->right;
//	}
//	max = node->data;
//	return max;
//}
//
//int min_num(TreeNode* node) {
//	int min = 0;
//	while (node->left != NULL) {
//		node = node->left;
//	}
//	min = node->data;
//	return min;
//}
//
//int main() {
//	FILE* fp = fopen("data.txt", "r");
//	int height = 0, leaf_count = 0;
//	int c = 0;
//	if (fp == NULL)
//	{
//		printf("error");
//		return;
//	}
//	element e;	
//	TreeNode* tmp, *root = NULL;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &e);
//		insert_node(&root, e);
//		printf("inserted %d\n", e);
//		c++;
//	}
//	height = power(get_height(root) - 1);
//	leaf_count = get_leaf_count(root);
//	if (height == leaf_count)
//		printf("완전이진트리입니다.\n");
//	else
//		printf("완전이진트리가 아닙니다.\n");
//
//	printf("최대값=%d\n", max_num(root));
//	printf("최소값=%d\n", min_num(root));
//	fclose(fp);
//	free(root);
//}