//#include<stdio.h>
//#include<stdlib.h>
//#define TRUE 1
//#define FALSE 0
//typedef struct TreeNode {
//	int data;
//	struct TreeNode *left, *right;
//	int thread;
//}TreeNode;
//
//TreeNode *create(int data,int t) {
//	TreeNode *ptr = (TreeNode*)malloc(sizeof(TreeNode));
//	ptr->data = data;
//	ptr->left = NULL;
//	ptr->right = NULL;
//	ptr->thread = t;
//}
//
//TreeNode *find_successor(TreeNode *p) {
//	TreeNode *q = p->right;
//	if (q == NULL || p->thread == TRUE)
//		return q;
//	while (q->left != NULL)
//		q = q->left;
//	return q;
//}
//
//void thread_inorder(TreeNode *t) {
//	TreeNode *q;
//	q = t;
//	while (q->left != NULL)
//		q = q->left;
//	do {
//		printf("%d -> ", q->data);
//		q = find_successor(q);
//	} while (q);
//}
//
//int main() {
//	TreeNode *ptr = create(10,0);
//	ptr->left = create(5,0);
//	ptr->left->left = create(1,1);
//	ptr->left->right = create(4,1);
//	ptr->right = create(15,0);
//	ptr->right->left = create(16,1);
//	ptr->right->right = create(25,0);
//
//	ptr->left->left->right = ptr->left;
//	ptr->left->right->right = ptr;
//	ptr->right->left->right = ptr->right;
//
//	thread_inorder(ptr);
//	free(ptr);
//	return 0;
//}