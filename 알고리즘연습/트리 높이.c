//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
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
//int get_height(TreeNode *ptr) {
//	int height = 0;
//	if (ptr != NULL) {
//		height = 1 + max(get_height(ptr->left), get_height(ptr->right));
//	}
//	return height;
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
//	printf("트리의 높이는 %d", get_height(ptr));
//	return 0;
//}