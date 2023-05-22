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
///*int get_leaf_count(TreeNode *ptr) {
//	int count = 0;
//	if (ptr->left == NULL && ptr->right == NULL)
//		return 1;
//	else {
//		count = get_leaf_count(ptr->left) + get_leaf_count(ptr->right);
//	}
//	return count;
//}*/
//
//int get_nonleaf_count(TreeNode *ptr) { //비단말노드 개수
//	int count = 0;
//	if (ptr->left != NULL || ptr->right != NULL)
//		count = 1 + get_nonleaf_count(ptr->left) + get_nonleaf_count(ptr->right);
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
//	printf("단말노드의 개수는 %d", get_nonleaf_count(ptr));
//	return 0;
//}