//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 100
//
//typedef struct TreeNode {
//	int data;
//	struct TreeNode *left, *right;
//}TreeNode;
//
//typedef TreeNode* element;
//typedef struct {
//	element data[MAX];
//	int front, rear;
//}QueueType;
//
//void error(char *message) {
//	fprintf(stderr, "%s\n", message);
//	exit(1);
//}
//
//void init_queue(QueueType *q) {
//	q->front = q->rear = 0;
//}
//
//int is_empty(QueueType *q) {
//	return (q->front == q->rear);
//}
//
//int is_full(QueueType *q) {
//	return ((q->rear + 1) % MAX == q->front);
//}
//
//void enqueue(QueueType *q, element item) {
//	if (is_full(q))
//		error("큐가 포화상태입니다.");
//	q->rear = (q->rear + 1) % MAX;
//	q->data[q->rear] = item;
//}
//
//element dequeue(QueueType *q) {
//	if (is_empty(q))
//		error("큐가 공백상태입니다.");
//	q->front = (q->front + 1) % MAX;
//	return q->data[q->front];
//}
//
//void level_order(TreeNode *ptr) {
//	QueueType q;
//	init_queue(&q);
//	if (ptr == NULL) return;
//	enqueue(&q, ptr);
//	while (!is_empty(&q)) {
//		ptr = dequeue(&q);
//		printf(" [%d] ", ptr->data);
//		if (ptr->left)
//			enqueue(&q, ptr->left);
//		if (ptr->right)
//			enqueue(&q, ptr->right);
//	}
//}
//
//TreeNode *new_node(int key) {
//	TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
//	node->data = key;
//	node->left = node->right = NULL;
//	return node;
//}
//
//TreeNode *insert(TreeNode *node, int data) {
//	if (node == NULL) return new_node(data);
//	if (node->data > data)
//		node->left = insert(node->left, data);
//	else
//		node->right = insert(node->right, data);
//	return node;
//}
//
//int main() {
//	TreeNode *node=NULL;
//	int key = 0;
//	FILE *fp = fopen("data.txt", "r");
//	if (fp == NULL) {
//		printf("Error");
//		return;
//	}
//
//	while (!feof(fp)) {
//		fscanf(fp, "%d", &key);
//		node = insert(node, key);
//	}
//
//	level_order(node);
//
//}