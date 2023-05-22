//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 100
//
//typedef struct TreeType {
//	int value;
//	struct TreeType* left;
//	struct TreeType* right;
//}TreeType;
//
//typedef TreeType* element;
//
//typedef struct QueueType {
//	int front, rear;
//	element data[MAX];
//}QueueType;
//
//void init(QueueType* q) {
//	q->front = q->rear = 0;
//}
//
//int empty(QueueType* q) {
//	return (q->front == q->rear);
//}
//
//int full(QueueType* q) {
//	return ((q->rear + 1) % MAX == q->front);
//}
//
//void enqueue(QueueType* q, element data) {
//	if (full(q))
//		printf("포화상태");
//	q->rear = (q->rear + 1) % MAX;
//	q->data[q->rear] = data;
//}
//
//element dequque(QueueType* q) {
//	if (empty(q))
//		printf("공백상태");
//	q->front = (q->front + 1) % MAX;
//	return q->data[q->front];
//}
//
//void level_order(TreeType* tmp) {
//	QueueType q;
//	init(&q);
//
//	if (tmp == NULL) return;
//	enqueue(&q, tmp);
//	while (!empty(&q)) {
//		tmp = dequque(&q);
//
//		printf(" [%d] ", tmp->value);
//		if (tmp->left)
//			enqueue(&q, tmp->left);
//		if (tmp->right)
//			enqueue(&q, tmp->right);
//	}
//}
//
//TreeType n1 = { 1,  NULL, NULL };
//TreeType n2 = { 4,  &n1,  NULL };
//TreeType n3 = { 16, NULL, NULL };
//TreeType n4 = { 25, NULL, NULL };
//TreeType n5 = { 20, &n3,  &n4 };
//TreeType n6 = { 15, &n2,  &n5 };
//TreeType* root = &n6;
//int main() {
//	printf("레벨 순회=");
//	level_order(root);
//	printf("\n\n");
//	printf("20194009_이준석");
//	return 0;
//}