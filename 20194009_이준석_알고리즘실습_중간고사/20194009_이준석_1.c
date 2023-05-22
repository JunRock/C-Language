#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	char str[20];
}element;
typedef struct TreeNode {
	char key[50];
	struct TreeNode *left, *right;
}TreeNode;

TreeNode *new_node(char *key) {
	TreeNode *temp = (TreeNode*)malloc(sizeof(TreeNode));
	strcpy(temp->key, key);
	temp->left = temp->right = NULL;
	return temp;
}


int compare(char *s1, char *s2)
{
	return strcmp(s1, s2);
}

TreeNode *insert(TreeNode *node, char *key) {
	if (node == NULL) return new_node(key);

	if (compare(key, node->key) < 0)
		node->left = insert(node->left, key);
	else if (compare(key, node->key) > 0)
		node->right = insert(node->right, key);
	return node;
}


void preorder(TreeNode *node) {
	if (node != NULL) {
		printf("[%s] ", node->key);
		preorder(node->left);
		preorder(node->right);
	}

}

int MAX(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int get_leaf_count(TreeNode *node) {
	int count = 0;
	if (node != NULL) {
		if (node->left == NULL && node->right == NULL)
			return 1;
		else
			count = get_leaf_count(node->left) + get_leaf_count(node->right);
	}
	return count;
}

int get_height(TreeNode *node) {
	int height = 0;
	if (node != NULL) {
		height = 1 + MAX(get_height(node->left), get_height(node->right));
	}
	return height;
}

int power(int a) {
	int result = 1;
	for (int i = 0; i < a; i++) {
		result *= 2;
	}
	return result;
}

int main() {
	int n;
	char str[20];
	TreeNode *node = NULL;
	int height = 0;
	int leaf_count = 0;
	printf("삽입할 데이터 개수를 입력하세요 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("삽입할 문자를 입력하세요(단, 크기 20이하) : ");
		scanf("%s", str);
		node = insert(node, str);
		printf("INSERTED : %s", str);
		printf("\n");
	}
	printf("preorder >> ");
	preorder(node);
	printf("\n");

	height = power(get_height(node) - 1);
	leaf_count = get_leaf_count(node);
	if (height == leaf_count)
		printf("포화이진트리입니다.");
	else
		printf("포화이진트리가 아닙니다.");
	return 0;
}