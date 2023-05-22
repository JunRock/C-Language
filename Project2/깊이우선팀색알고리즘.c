//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 50
//
//typedef struct {
//	char name[10];
//}Station;
//
//typedef struct GrapeType {
//	int n;
//	int adj_mat[MAX][MAX];
//}GrapeType;
//
//void init(GrapeType *g) { //그래프 초기화
//	g->n = 0;
//	int r, c;
//	for (r = 0; r < MAX; r++)
//		for (c = 0; c < MAX; c++)
//			g->adj_mat[r][c] = 0;
//}
//
//void insert_vertex(GrapeType *g, int v) { //정점 삽입 연산
//	if (g->n > MAX - 1) {
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
//void print_mat(GrapeType *g, Station *s) {
//	for (int i = 0; i < g->n; i++)
//		printf("%s ", s[i].name);
//	printf("\n");
//	for (int i = 0; i < g->n; i++)
//	{
//		printf("%s ", s[i].name);
//		for (int j = 0; j < g->n; j++)
//			printf("%2d ", g->adj_mat[i][j]);
//		printf("\n");
//	}
//}
//
//
//int main() {
//	GrapeType *g;
//	g = (GrapeType*)malloc(sizeof(GrapeType));
//	Station station[10];
//	char st1[10];
//	char st2[10];
//	int count = 0;
//	int check = 0;
//	int i, j;
//
//	FILE *fp = fopen("data3.txt", "r");
//
//	if (fp == NULL) {
//		printf("error");
//		return 0;
//	}
//
//	while (!feof(fp)) {
//		fscanf(fp, "%s", &st1);
//		for (i = 0; i < 10; i++) {
//			if (strcmp(station[i].name, st1) == 0) {
//				check = 1;
//				break;
//			}
//		}
//
//		if (check == 0) {
//			strcpy(station[count].name, st1);
//			count++;
//		}
//		check = 0;
//	}
//
//	rewind(fp);
//	init(g);
//	for (i = 0; i < count; i++)
//		insert_vertex(g, i);
//
//	while (!feof(fp)) {
//		fscanf(fp, "%s %s", st1, st2);
//		for (i = 0; i < count; i++) {
//			if (strcmp(station[i].name, st1) == 0)
//				break;
//		}
//		for (j = 0; j < count; j++) {
//			if (strcmp(station[count].name, st2) == 0)
//				break;
//		}
//
//		insert_edge(g, i, j);
//	}
//
//	print_mat(g, 0);
//}