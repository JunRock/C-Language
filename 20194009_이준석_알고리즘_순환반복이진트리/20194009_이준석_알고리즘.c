/*
	�ۼ���: 2022.09.30
	�ۼ���: ���ؼ�
	���α׷���: ��ȯ,�ݺ��� �̿��� ����Ʈ�� �� �ð�����
*/

#include<stdio.h>
#include<stdlib.h> //�����Ҵ��� ���� stdlib.h������� ����
#include<time.h> //�ð������� �ϱ� ���� time.h������� ����
#define SIZE 32500 //���� �����  32500���� �Ҵ�
int top = -1; //������ �ε����� ����Ű�� ����

typedef struct TreeNode { //TreeNode ����ü ����
	int data;
	struct TreeNode* left, *right; //���� ����Ʈ��, ������ ����Ʈ���� ����Ű�� ���� �ڱ����� �����ͺ��� ����
}TreeNode;

TreeNode* stack[SIZE]; //TreeNode���� stack�����͹迭 ����

TreeNode* new_node(int item) { //���ο� ��带 �����ϴ� �Լ�
	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode)); //temp��带 �������� ����
	temp->data = item; //temp�� data ���� ���ڷ� ���� item �ʱ�ȭ
	temp->left = temp->right = NULL; //temp�� ���� ����Ʈ�� �� ������ ����Ʈ���� NULL�� �ʱ�ȭ
	return temp; //temp��ȯ
}

TreeNode* insert_node(TreeNode* node, int key) { //��� ���� �Լ�
	if (node == NULL) return new_node(key); //��忡 �ƹ��͵� ������ new_node�Լ��� key���� ���ڷ� ����

	if (key < node->data) //node�� data���� ���ο� ����� key������ Ŭ ���
		node->left = insert_node(node->left, key); //��͸� �̿��Ͽ� node->left�� �ʱ�ȭ
	else if (key > node->data) //node�� data���� ���ο� ����� key������ ���� ���
		node->right = insert_node(node->right, key);  //��͸� �̿��Ͽ� node->right�� �ʱ�ȭ

	return node; //node�� ��ȯ
}

void push(TreeNode* p) { //���ù迭�� ���� �ִ� push�Լ�
	if (top < SIZE - 1) //���ÿ� ������ �����ִ� ���
		stack[++top] = p;
}

TreeNode* pop() { //���ù迭�� �ִ� ���� ���� pop�Լ�
	TreeNode* p = NULL; //TreeNode �����ͺ����� NULL�� �ʱ�ȭ
	if (top >= 0) //���ù迭�� ��������� ���� ���
		p = stack[top--]; //p�� stack�迭�� ���� �ʱ�ȭ
	return p; //p��ȯ
}

//��ȯ
void inorder(TreeNode* node) { //��ȯ ������ȸ �Լ�(LVR)
	if (node) { //��尡 ���� ���
		inorder(node->left); //����� ���� ����Ʈ�� ���� ��ȸ
		printf("[%d] ", node->data); //��� ������ ���
		inorder(node->right); //����� ������ ����Ʈ�� ��ȸ
	}
}

void preorder(TreeNode* node) { //��ȯ ������ȸ �Լ�(VLR)
	if (node) { //��尡 ���� ���
		printf("[%d] ", node->data); //��� ������ ���
		preorder(node->left); //����� ���� ����Ʈ�� ��ȸ
		preorder(node->right); //����� ������ ����Ʈ�� ��ȸ
	}
}

void postorder(TreeNode* node) { //��ȯ ������ȸ �Լ�(LRV)
	if (node) { //��尡 ���� ���
		postorder(node->left); //��� ���� ����Ʈ�� ��ȸ
		postorder(node->right); //��� ������ ����Ʈ�� ��ȸ
		printf("[%d] ", node->data); //��� ������ ���
	}
}

//�ݺ�����Ʈ��
void insert_node_iter(TreeNode** node, int key) { //�ݺ��� �̿��� �����Լ�
	TreeNode* p, *t, *n; //p�� �θ���, t�� ������, n�� ���ο� ���

	t = *node;
	p = NULL;
	while (t != NULL) {
		if (key == t->data) return; //���� ��忡 �̹� �����Ͱ� ������ ��� ����
		p = t; //p�� t�� �θ���
		if (key < t->data) //���ڷ� ���� key���� t�� data���� ���� ���
			t = t->left; //t��带 t�� ���� ����Ʈ���� �̵�
		else //���ڷ� ���� key���� t�� data���� Ŭ ���
			t = t->right; //t��带 t�� ������ ����Ʈ���� �̵�
	}
	n = (TreeNode*)malloc(sizeof(TreeNode)); //���ο��� n�� �����Ҵ�
	if (n == NULL) return; //�����Ҵ��� ������ ���

	n->data = key; //n����� data�� key�� �ʱ�ȭ
	n->left = n->right = NULL; //n����� ���ʰ� ������ ����Ʈ���� NULL�� �ʱ�ȭ

	if (p != NULL) { //p�� NULL�� �ƴѰ��
		if (key < p->data) //���� p����� data���� ���ڷ� ���� key������ Ŭ ���
			p->left = n; //p����� ���� ����Ʈ���� ���ο� ��� n�� �ʱ�ȭ
		else //���� p����� data���� ���ڷ� ���� key������ ���� ���
			p->right = n; //p����� ������ ����Ʈ���� ���ο� ��� n�� �ʱ�ȭ
	}
	else //��尡 ���������
		*node = n; //��带 n���� �ʱ�ȭ
}

void inorder_iter(TreeNode* node) { //�ݺ��� �̿��� ������ȸ �Լ�

	while (1) {
		for (; node; node = node->left) //����� ���� ����Ʈ���� �̵�
			push(node); //����� ���� ����Ʈ������ push

		node = pop();

		if (!node) break; //��尡 ���� �ƴҰ�� �ݺ�����
		printf("[%d] ", node->data); //����� ������ �� ���
		node = node->right; //��带 ����� ������ ����Ʈ���� �ʱ�ȭ
	}
	printf("\n");
}

int MAX(int a, int b) { //get_height�Լ����� �ִ밪�� ���ϱ� ���� �Լ�
	if (a > b) return a;
	else
		return b;
}

int get_count_node(TreeNode* node) { //��尳�� ���ϴ� �Լ�
	int count = 0;
	if (node != NULL) { //��尡 NULL�� �ƴҰ��
		count = 1 + get_count_node(node->left) + get_count_node(node->right); //������ ����Ʈ���� ���� ��ȯȣ�� ��, ��ȯ�Ǵ� ���� 1����
	}
	return count; //count���� ��ȯ
}

int get_height(TreeNode* node) { //Ʈ���� ���̸� ���ϴ� �Լ�
	int height = 0;
	if (node != NULL) { //��尡 NULL�� �ƴѰ��
		height = 1 + MAX(get_height(node->left), get_height(node->right));// �� ����Ʈ���� ���� ��ȯȣ�� ��
		// MAX�� �̿��� ��ȯ���� �ִ밪 ����
	}
	return height; //height���� ��ȯ
}

int get_leaf_count(TreeNode* node) { //�ܸ������ ������ ���ϴ� �Լ�
	int count = 0;
	if (node != NULL) { //��尡 NULL�� �ƴ� ���
		if (node->left == NULL && node->right == NULL) //�ܸ����� �ڽĳ�尡 ���� ���
			return 1; //�ܸ�����̸� 1�� ��ȯ
		else
			count = get_leaf_count(node->left) + get_leaf_count(node->right); //��ܸ������ ��� �� ����Ʈ���� ���� ��ȯȣ�� ��
		// ��ȯ�Ǵ� ���� ����
	}
	return count;
}

int main() {
	FILE* fp = fopen("data.txt", "r"); //���������� ���� �� ���� open
	int temp;
	clock_t start, end; //�ð��� �����ϱ� ���� ����
	double duration = 0; //�ɸ��ð��� Ȯ���ϴ� ����

	int count = 0;

	TreeNode* node1 = NULL; //��ȯ��ȸ�� ���� ���
	TreeNode* node2 = NULL; //�ݺ���ȸ�� ���� ���

	if (fp == NULL) { //������ �������� �ʴ� ���
		printf("������ ã�� �� �����ϴ�.");
		return 0;
	}
	//��ȯ����
	start = clock();
	while (!feof(fp)) {
		fscanf(fp, "%d", &temp);
		node1 = insert_node(node1, temp); //���Ͽ��� ���� �����Ͱ��� ��ȯ�� �̿��Ͽ� insert 
	}
	end = clock();
	duration = end - start;
	printf("��ȯ���� �ɸ��ð�: %lf\n\n", duration / 1000);

	rewind(fp); //�ݺ������� ���� ����������fp�� ������ ���������� �̵�

	//�ݺ�����
	start = clock();
	while (!feof(fp)) {
		fscanf(fp, "%d", &temp);
		insert_node_iter(&node2, temp); //���Ͽ��� ���� �����Ͱ��� �ݺ��� �̿��� insert
	}
	end = clock();
	duration = end - start;
	printf("�ݺ����� �ɸ��ð�: %lf\n\n\n", duration / 1000);

	//��ȯ�� �̿��� ��ȸ
	start = clock();
	printf("<������ȸ>\n");
	inorder(node1); //��ȯ ������ȸ �Լ� ȣ��
	printf("\n");
	end = clock();
	duration = end - start;
	printf("��ȯ ������ȸ �ɸ��ð�: %lf\n\n\n", duration / 1000);

	start = clock();
	printf("<������ȸ>\n");
	preorder(node1); //��ȯ ������ȸ �Լ� ȣ��
	printf("\n");
	end = clock();
	duration = end - start;
	printf("��ȯ ������ȸ �ɸ��ð�: %lf\n\n\n", duration / 1000);

	start = clock();
	printf("<������ȸ>\n");
	postorder(node1);//��ȯ ������ȸ �Լ� ȣ��
	printf("\n");
	end = clock();
	duration = end - start;
	printf("��ȯ ������ȸ �ɸ��ð�: %lf\n\n\n", duration / 1000);
	printf("\n");
	printf("\n");
	printf("\n");



	//�ݺ��� �̿��� ��ȸ
	start = clock();
	printf("<�ݺ�������ȸ>\n");
	inorder_iter(node2); //�ݺ��� �̿��� ������ȸ
	end = clock();
	duration = end - start;
	printf("�ݺ� ������ȸ �ɸ��ð�: %lf\n\n\n", duration / 1000);
	printf("\n");
	printf("\n");
	printf("\n");

	count = get_count_node(node1); //����� ������ �ľ�
	printf("��ü ����� ����: %d\n\n", count);

	count = get_height(node1); //Ʈ���� ���̸� �ľ�
	printf("Ʈ���� ����: %d\n\n", count);

	count = get_leaf_count(node1); //�ܸ������ ���� �ľ�
	printf("�ܸ������ ����: %d\n\n", count);
	free(node1); //node1�����Ҵ� ����
	free(node2); //node2�����Ҵ� ����
	fclose(fp); //���� ����
	return 0;
}