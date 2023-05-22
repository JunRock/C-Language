//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int element;
//typedef struct TreeNode {
//	element key;
//	struct TreeNode *left, *right;
//}TreeNode;
//
//TreeNode *search(TreeNode *node, int key) {
//	if (node == NULL) return NULL;
//	if (key == node->key) return node;
//	else if (key < node->key)
//		return search(node->left, key);
//	else
//		return search(node->right, key);
//}
//
//TreeNode *new_node(int item) {
//	TreeNode *temp = (TreeNode*)malloc(sizeof(TreeNode));
//	temp->key = item;
//	temp->left = temp->right = NULL;
//	return temp;
//}
//
//TreeNode *insert(TreeNode *node, int key) {
//	if (node == NULL) return new_node(key);
//
//	if (node->key > key)
//		node->left = insert(node->left, key);
//	else if (node->key < key)
//		node->right = insert(node->right, key);
//	return node;
//}
//
//TreeNode *min_value(TreeNode *node) {
//	TreeNode *current = node;
//	while (current->left != NULL)
//		current = current->left;
//	return current;
//}
//
//TreeNode *delete(TreeNode *node, int key) {
//	if (node == NULL) return node;
//	if (node->key > key)
//		node->left = delete(node->left, key);
//	else if (node->key < key)
//		node->right = delete(node->right, key);
//	else {
//		if (node->left == NULL) {
//			TreeNode *temp = node->right;
//			free(node);
//			return temp;
//		}
//
//		else if (node->right == NULL) {
//			TreeNode *temp = node->left;
//			free(node);
//			return temp;
//		}
//		TreeNode *temp = min_value(node->right);
//		node->key = temp->key;
//		node->right = delete(node->right, temp->key);
//	}
//	return node;
//}
//
//void inorder(TreeNode *node) {
//	if (node!=NULL) {
//		inorder(node->left);
//		printf("[%d] ", node->key);
//		inorder(node->right);
//	}
//}
//
//int main() {
//	TreeNode *node = NULL;
//	int key;
//	FILE *fp = fopen("data.txt", "r");
//	if (fp == NULL) {
//		printf("error");
//		return;
//	}
//
//	while (!feof(fp)) {
//		fscanf(fp, "%d", &key);
//		node = insert(node, key);
//	}
//
//	inorder(node);
//	printf("\n");
//	if (search(node, 200))
//		printf("이진탐색트리에서 발견함");
//	else
//		printf("이진탐색트리에서 발견 못함");
//	return 0;
//}