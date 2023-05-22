//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct TreeNode {
//	int data;
//	struct TreeNode *left, *right;
//}TreeNode;
//
//TreeNode *create(int data) {
//	TreeNode *ptr = (TreeNode*)malloc(sizeof(TreeNode));
//	ptr->data = data;
//	ptr->left = NULL;
//	ptr->right = NULL;
//}
//
//int get_node_count(TreeNode *ptr) {
//	int count = 0;
//	if (ptr != NULL) {
//		count = 1 + get_node_count(ptr->left) + get_node_count(ptr->right);
//	}
//	return count;
//}
//
//int main() {
//	TreeNode *ptr = create('+');
//	ptr->left = create('*');
//	ptr->left->left = create(1);
//	ptr->left->right = create(4);
//	ptr->right = create('+');
//	ptr->right->left = create(16);
//	ptr->right->right = create(25);
//
//	printf("노드의 개수는 %d", get_node_count(ptr));
//	return 0;
//}