#include <stdio.h>
#include <stdlib.h>

typedef struct AVLNode {
	int key;
	char name[20];
	struct AVLNode *left;
	struct AVLNode *right;
} AVLNode;	

typedef struct Student {
	int num;
	char name[20];
}Student;
 

void search(AVLNode *root, Student *list, int key)		
{
	AVLNode *p = root;
	while (p != NULL) {
		if (key ==list->num) {
			printf(" %d %s\n",list->num,list->name);
			return;	
		}
		else if (key < list->num) {
			printf(" %d %s\n", list->num, list->name);
			p = p->left;
			list++;
		}
		else if (key > list->num) {
			printf(" %d %s\n", list->num, list->name);
			p = p->right;
			list++;
		}
	}
	return;	
}

int get_height(AVLNode *node)	
{
	int height = 0;
	if (node != NULL)	
		height = 1 + max(get_height(node->left), get_height(node->right));

	return height;
}

int get_balance(AVLNode * node)
{
	if (node == NULL) return 0;

	return get_height(node->left) - get_height(node->right);
}

AVLNode* create_node(Student *s)	
{
	AVLNode* node = (AVLNode *)malloc(sizeof(AVLNode));	
	node->key = s->num;
	strcpy(node->name,s->name);
	node->left = node->right = NULL;	
	return node;	
}

AVLNode* rotate_right(AVLNode *parent)	
{
	AVLNode *child = parent->left;	
	parent->left = child->right;	
	child->right = parent;		

	return child;	
}

AVLNode* rotate_left(AVLNode *parent)	
{
	AVLNode *child = parent->right;
	parent->right = child->left;	
	child->left = parent;		

	return child;	
}

AVLNode* insert(AVLNode *node, Student *s)		
{
	if (node == NULL)
		return create_node(s);	
									
	if (s->num < node->key)	
		node->left = insert(node->left, s);	
	else if (s->num > node->key)	
		node->right = insert(node->right, s);	
	else	
		return node;

	int balance = get_balance(node);	

	if (balance > 1 && s->num < node->left->key)	
		return rotate_right(node);

	if (balance < -1 && s->num>node->right->key)	
		return rotate_left(node);

	if (balance > 1 && s->num > node->left->key) {	
		node->left = rotate_left(node->left);
		return rotate_right(node);
	}

	if (balance < -1 && s->num < node->right->key) {
		node->right = rotate_right(node->right);
		return rotate_left(node);
	}
	return node;	
}

AVLNode* min_value_node(AVLNode *node)	
{
	AVLNode *current = node;

	while (current->left != NULL)	
		current = current->left;

	return current;
}

void inorder(AVLNode *node,Student *s) {
	if (node != NULL) {
		printf("%d %s , ", s->num, s->name);
		inorder(node->left, s++);
		inorder(node->right, s++);
	}
}

int main(void)
{
	AVLNode *root = NULL;
	char c;		
	int num;	
	char name[20];
	int i=0;
	int count = 0;
	Student *list;
	FILE *fp = fopen("data3.txt", "r");		
	if (fp == NULL) {		
		printf("File not found\n");
		return 0;
	}

	while (!feof(fp)) {
			fscanf(fp, "%c %d %s", &c, &num, name);
			if (c == 'i')
				count++;
		}
	rewind(fp);
	list = (Student*)malloc(sizeof(Student)*count);
	while (!feof(fp)) {
		fscanf(fp, "%c %d %s", &c, &num,name);	
		if (c == 'i') {	
			list[i].num = num;
			strcpy(list[i].name, name);
			i++;
			root = insert(root, list);
		}
		else if (c == 's') {	
			printf("탐색 : %d\n", num);
			printf("AVL 트리 탐색 결과 - ");
			search(root,list,num);
			printf("\n\n");
			printf("이중트리 탐색결과 - ");
			search(root, list, num);
		}
	}

	printf("<AVL트리 전위 순회 출력>\n");
	inorder(root, list);
	printf("\n");
	printf("<이진탐색트리 전위 순회 출력>\n");
	inorder(root, list);
	fclose(fp);	
	return 0;
}