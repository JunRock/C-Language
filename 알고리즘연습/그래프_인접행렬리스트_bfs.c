//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 100
//#define	TRUE 1
//#define FALSE 0
//int visited[MAX];
//
//typedef struct GrapeNode {
//	int vertex;
//	struct GrapeNode *link;
//}GrapeNode;
//
//typedef struct GrapeType {
//	int n; //정점의 개수
//	GrapeNode *adj_list[MAX];
//}GrapeType;
//
//typedef struct {
//	int data[MAX];
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
//void enqueue(QueueType *q, int item) {
//	if (is_full(q))
//		error("큐가 포화상태입니다.");
//	q->rear = (q->rear + 1) % MAX;
//	q->data[q->rear] = item;
//}
//
//int dequeue(QueueType *q) {
//	if (is_empty(q))
//		error("큐가 공백상태입니다.");
//	q->front = (q->front + 1) % MAX;
//	return q->data[q->front];
//}
//
//void init(GrapeType *g) {
//	int v;
//	g->n = 0;
//	for (v = 0; v < MAX; v++) {
//		g->adj_list[v] = NULL;
//	}
//}
//
//void insert_vertex(GrapeType *g,int v) {
//	if (g->n > MAX - 1) {
//		printf("error");
//		exit(1);
//	}
//	g->n++;
//}
//
//void insert_edge(GrapeType *g, int u, int v) {
//	GrapeNode *node;
//	if (u >= g->n || v >= g->n) {
//		printf("error");
//		exit(1);
//	}
//	node = (GrapeNode*)malloc(sizeof(GrapeNode));
//	node->vertex = v;
//	node->link = g->adj_list[u];
//	g->adj_list[u] = node;
//}
//
//void print_list(GrapeType *g) {
//	for (int i = 0; i < g->n; i++) {
//		GrapeNode *p = g->adj_list[i];
//		printf("정점 %d의 인접 리스트 ", i);
//		while (p != NULL) {
//			printf("->%d ", p->vertex);
//			p = p->link;
//		}
//		printf("\n");
//	}
//}
//
//void bfs_mat(GrapeType *g, int v) {
//	QueueType q;
//	GrapeNode *w;
//	init_queue(&q);
//	visited[v] = TRUE;
//	printf("%d-> ", v);
//	enqueue(&q, v);
//	while (!is_empty(&q)) {
//		v = dequeue(&q);
//		for (w = g->adj_list[v]; w; w = w->link) {
//			if (!visited[w->vertex]) {
//				visited[w->vertex] = TRUE;
//				printf("%d ->", w->vertex);
//				enqueue(&q, w->vertex);
//			}
//		}
//	}
//}
//
//int main() {
//		GrapeType *g;
//		g = (GrapeType*)malloc(sizeof(GrapeType));
//		init(g);
//		for (int i = 0; i < 4; i++) {
//			insert_vertex(g, i);
//		}
//		insert_edge(g, 0, 1);
//		insert_edge(g, 0, 2);
//		insert_edge(g, 0, 3);
//		insert_edge(g, 1, 2);
//		insert_edge(g, 2, 3);
//		print_list(g);
//		printf("\n");
//		printf("깊이우선탐색 리스트\n");
//		bfs_mat(g, 0);
//		free(g);
//	} 