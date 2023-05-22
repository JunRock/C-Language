//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 100
//
//typedef struct {
//	char name[10];
//}Station;
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
//		printf("error5");
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
//void print_list(GrapeType *g,Station *s) {
//	for (int i = 0; i < g->n; i++) {
//		GrapeNode *p = g->adj_list[i];
//		printf("%s의 인접 리스트 ", s[i].name);
//		while (p != NULL) {
//			printf("->%s ", s[p->vertex].name);
//			p = p->link;
//		}
//		printf("\n");
//	}
//}
//
//
//
//int main() {
//	GrapeType *g=(GrapeType*)malloc(sizeof(GrapeType));
//	Station station[10];
//	FILE *fp = fopen("data03.txt", "r");
//	if (fp == NULL) {
//		printf("Error");
//		return 0;
//	}
//
//	char st1[10];
//	char st2[10];
//	int count = 0;
//	int check = 0;
//	int i, j;
//
//	while (!feof(fp)) {
//		fscanf(fp, "%s", st1);
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
//		check=0;
//	}
//
//	rewind(fp);
//	init(g);
//	for (i = 0; i < count; i++) {
//		insert_vertex(g, i);
//	}
//
//	while (!feof(fp)) {
//		fscanf(fp, "%s %s", st1, st2);
//		for (i = 0; i < count; i++) {
//			if (strcmp(station[i].name, st1) == 0)
//				break;
//		}
//		for (j = 0; j < count; j++) {
//			if (strcmp(station[j].name, st2) == 0)
//				break;
//		}
//
//		insert_edge(g, i, j);
//	}
//	print_list(g, station);
//	free(g);
//	fclose(fp);
//	return 0;
//} 