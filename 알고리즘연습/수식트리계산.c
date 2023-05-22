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
//int evaluate(TreeNode *root) {
//	if (root == NULL) return 0;
//	if (root->left == NULL && root->right == NULL)
//		return root->data;
//	else {
//		int op1 = evaluate(root->left);
//		int op2 = evaluate(root->right);
//		printf("%d %c %d을 계산합니다.\n", op1, root->data, op2);
//		switch (root->data) {
//		case '+':
//			return op1 + op2;
//
//		case '-':
//			return op1 - op2;
//
//		case '*':
//			return op1 * op2;
//
//		case '/':
//			return op1 / op2;
//		}
//	}
//	return 0;
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
//	printf("수식의 값은 %d\n", evaluate(ptr));
//	free(ptr);
//	return 0;
//}