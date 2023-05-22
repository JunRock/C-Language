//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 50
//#define TRUE 1
//#define FALSE 0
//int visited[MAX];
//typedef struct GrapeType{
//	int n;
//	int adj_mat[MAX][MAX];
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
//void init(GrapeType *g) { //그래프 초기화
//	g->n = 0;
//	int r, c;
//	for (r = 0; r < MAX; r++)
//		for (c = 0; c < MAX; c++)
//			g->adj_mat[r][c] = 0;
//}
//
//void insert_vertex(GrapeType *g,int v) { //정점 삽입 연산
//	if (g->n > MAX - 1){
//		printf("error");
//		exit(1);
//	}
//	g->n++;
//}
//
//void insert_edge(GrapeType *g, int start, int end) {
//	if (start >= g->n || end >= g->n) {
//		printf("error");
//		exit(1);
//	}
//	g->adj_mat[start][end] = 1;
//	g->adj_mat[end][start] = 1;
//}
//
//void print(GrapeType *g) {
//	for (int i = 0; i < g->n; i++)
//	{
//		for (int j = 0; j < g->n; j++)
//			printf("%2d ", g->adj_mat[i][j]);
//		printf("\n");
//	}
//}
//
//void bfs_mat(GrapeType *g, int v) {
//	QueueType q;
//	init_queue(&q);
//	visited[v] = TRUE;
//	printf("%d-> ", v);
//	enqueue(&q, v);
//	while (!is_empty(&q)) {
//		v = dequeue(&q);
//		for (int i = 0; i < g->n; i++) {
//			if (g->adj_mat[v][i] && !visited[i]) {
//				visited[i] = TRUE;
//				printf("%d-> ", i);
//				enqueue(&q, i);
//			}
//		}
//	}
//}
//
//int main() {
//	GrapeType *g;
//	g = (GrapeType*)malloc(sizeof(GrapeType));
//	init(g);
//	for (int i = 0; i < 4; i++) {
//		insert_vertex(g, i);
//	}
//	insert_edge(g, 0, 1);
//	insert_edge(g, 0, 2);
//	insert_edge(g, 0, 3);
//	insert_edge(g, 1, 2);
//	insert_edge(g, 2, 3);
//	print(g);
//	printf("\n");
//	printf("너비 우선 탐색\n");
//	bfs_mat(g, 0);
//	free(g);
//}