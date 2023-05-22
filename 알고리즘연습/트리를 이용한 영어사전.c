//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <memory.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//typedef struct element {
//	char word[100];
//	char meaning[100];
//}element;
//
//typedef struct TreeNode {
//	element key;
//	struct TreeNode *left;
//	struct TreeNode *right;
//}TreeNode;
//
//int compare(element e1, element e2)
//{
//	return strcmp(e1.word, e2.word);
//}
//
//void insert_node(TreeNode **root, element key)
//{
//	TreeNode *p, *t;
//	TreeNode *n;
//
//	t = *root;
//	p = NULL;
//
//	while (t != NULL) {
//		if (compare(key, t->key) == 0)
//			return;
//		p = t;
//		if (compare(key, t->key) < 0)
//			t = t->left;
//		else
//			t = t->right;
//	}
//
//	n = (TreeNode *)malloc(sizeof(TreeNode));
//	if (n == NULL) {
//		printf("�޸� ���� �Ҵ� ����\n");
//		return;
//	}
//
//	n->key = key;
//	n->left = n->right = NULL;
//
//	if (p != NULL)
//	{
//		if (compare(key, p->key) < 0)
//			p->left = n;
//		else
//			p->right = n;
//	}
//	else
//		*root = n;
//}
//
//TreeNode *min_value_node(TreeNode *node)
//{
//	TreeNode *current = node;
//	while (current->left != NULL)
//		current = current->left;
//	return current;
//}
//
//TreeNode *delete_node(TreeNode *root, element key)
//{
//	if (root == NULL) return root;
//	if (compare(key, root->key) < 0)
//		root->left = delete_node(root->left, key);
//	if (compare(key, root->key) > 0)
//		root->right = delete_node(root->right, key);
//	else {
//		if (root->left == NULL) {
//			TreeNode *temp = root->right;
//			free(root);
//			return temp;
//		}
//		else if (root->right == NULL) {
//			TreeNode *temp = root->left;
//			free(root);
//			return temp;
//		}
//		TreeNode *temp = min_value_node(root->right);
//		root->key = temp->key;
//		root->right = delete_node(root->right, temp->key);
//	}
//	return root;
//}
//void display(TreeNode *p)
//{
//	int i;
//	if (p != NULL) {
//		display(p->left);
//		p->key.word[0] = p->key.word[0] - 32;
//		printf("%s : %s, ", p->key.word, p->key.meaning);
//		display(p->right);
//	}
//}
//
//TreeNode *search(TreeNode *root, element key)
//{
//	TreeNode *p = root;
//
//	while (p != NULL) {
//		switch (compare(key, p->key))
//		{
//		case -1:
//			p = p->left;
//			break;
//		case 0:
//			return p;
//		case 1:
//			p = p->right;
//			break;
//		}
//	}
//
//	return p;
//}
//
//void main()
//{
//	FILE *fp;
//	char commend;
//	element e;
//	TreeNode *root = NULL;
//	TreeNode *tmp;
//
//	fp = fopen("data1.txt", "r");
//
//	printf("<< ������ �ܾ ������ּ��� >>\n");
//	while (!feof(fp)) {
//		fscanf(fp, "%c", &commend);
//		switch (commend)
//		{
//		case 'i':
//			fscanf(fp, "%s %s", e.word, e.meaning);
//			insert_node(&root, e);
//			printf("<< %s �Է� >>  %s : %s\n", e.word, e.word, e.meaning);
//			break;
//		case 'd':
//			fscanf(fp, "%s", e.word);
//			//strcpy(e.meaning, "");
//			root = delete_node(root, e);
//			printf("<< %s ���� >> %s �ܾ� ����\n", e.word, e.word);
//			break;
//		case 'p':
//			printf("<< ���� ���� ��� >>\n");
//			display(root);
//			printf("\n");
//			break;
//		case 's':
//			fscanf(fp, "%s", e.word);
//			strcpy(e.meaning, "");
//			tmp = search(root, e);
//			if (tmp != NULL) {
//				printf("<< %s Ž�� >> %s : %s \n", tmp->key.word, tmp->key.word, tmp->key.meaning);
//			}
//			break;
//		case 'q':
//			printf("<< ���� >>\n");
//			exit(1);
//			break;
//		}
//	}
//
//	fclose(fp);
//}