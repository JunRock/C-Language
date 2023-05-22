//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct TreeNode {
//	int data;
//	struct TreeNode *left, *right;
//}TreeNode;
//
//int calc(TreeNode *root) {
//	int lsize, rsize;
//	if (root == NULL) return 0;
//	lsize = calc(root->left);
//	rsize = calc(root->right);
//	return (root->data + lsize + rsize);
//}
//
//int main() {
//	TreeNode n4 = { 500,NULL,NULL };
//	TreeNode n5 = { 200,NULL,NULL };
//	TreeNode n3 = { 100,&n4,&n5 };
//	TreeNode n2 = { 50,NULL,NULL };
//	TreeNode n1 = { 0,&n2,&n3 };
//	
//	printf("디렉토리 크기 %d", calc(&n1));
//	return 0;
//}