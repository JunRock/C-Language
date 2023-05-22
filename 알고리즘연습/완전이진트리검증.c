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
//int MAX(int a, int b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//int get_leaf_count(TreeNode *node) {
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
//int get_height(TreeNode *node) {
//	int height = 0;
//	if (node != NULL) {
//		height = 1 +  MAX(get_height(node->left), get_height(node->right));
//	}
//	return height;
//}
//
//int power(int a) {
//	int result = 1;
//	for (int i = 0; i < a; i++) {
//		result *= 2;
//	}
//	return result;
//}
//
//int main() {
//	TreeNode *node = NULL;
//	int key;
//	int height = 0, leaf_count = 0;
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
//	height = power(get_height(node) - 1);
//	leaf_count = get_leaf_count(node);
//	if (height == leaf_count)
//		printf("포화이진트리입니다.");
//	else
//		printf("포화이진트리가 아닙니다.");
//	return 0;
//}