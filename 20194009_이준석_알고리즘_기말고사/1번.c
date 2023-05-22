//#include <stdio.h>
//#include <stdlib.h>
//#define TRUE	1
//#define FALSE	0
//#define MAX_VERTICES	100
//#define INF	1000
//
//int parent[MAX_VERTICES];	
//
//void set_init(int n)		
//{
//	for (int i = 0; i < n; i++)
//		parent[i] = -1;		
//}
//
//int set_find(int curr)		
//{
//	if (parent[curr] == -1)		
//		return curr;			
//	while (parent[curr] != -1)	
//		curr = parent[curr];	
//	return curr;
//}
//
//void set_union(int a, int b)	
//{
//	int root1 = set_find(a);	
//	int root2 = set_find(b);	
//	if (root1 != root2)			
//		parent[root1] = root2;	
//}
//
//struct Edge {		
//	int start, end, weight;		
//};
//
//typedef struct GraphType {
//	int n;	
//	struct Edge edges[2 * MAX_VERTICES];	
//} GraphType;	
//
//void graph_init(GraphType *g)		
//{
//	g->n = 0;	
//	for (int i = 0; i < 2 * MAX_VERTICES; i++) {	
//		g->edges[i].start = 0;
//		g->edges[i].end = 0;
//		g->edges[i].weight = INF;
//	}
//}
//
//void insert_edge(GraphType *g, int start, int end, int w)	
//{
//	g->edges[g->n].start = start;		
//	g->edges[g->n].end = end;			
//	g->edges[g->n].weight = w;			
//	g->n++;							
//}
//
//int graph_compare(GraphType *g, struct Edge e)		
//{
//	for (int i = 0; i < g->n; i++) {		
//		if (e.start == g->edges[i].end && e.end == g->edges[i].start)
//			return FALSE;		
//		else if (e.start == g->edges[i].start && e.end == g->edges[i].end)
//			return FALSE;		
//	}
//	return TRUE;	
//}
//
//int compare(const void* a, const void* b)		
//{
//	struct Edge* x = (struct Edge*)a;	
//	struct Edge* y = (struct Edge*)b;	
//	return (x->weight - y->weight);		
//}
//
//void kruskal(GraphType *g)		
//{
//	int i = 0, sum = 0;	
//	int uset, vset;		
//	struct Edge e;
//	int list[10];
//	int k = 0;
//	set_init(g->n);		
//	qsort(g->edges, g->n, sizeof(struct Edge), compare);	
//	printf("<선택된 간선>\n");
//	while (i < g->n)	
//	{
//		e = g->edges[i];
//		uset = set_find(e.start);	
//		vset = set_find(e.end);		
//		
//		if (uset != vset) {			
//			printf("%d-%d(%d) , ", e.start, e.end, e.weight);
//			sum = sum + e.weight;		
//			set_union(uset, vset);		
//		}
//		else {
//			list[k++] = i;
//		}
//			
//		i++;
//	}
//	printf("\n");
//	for (int j = 0; j < k; j++) {
//		e = g->edges[list[j]];
//		printf("간선 %d-%d : %d - 사이클 생성으로 제외\n", e.start, e.end, e.weight);
//	}
//}
//
//int main(void)
//{
//	GraphType *g;
//	struct Edge e;		
//
//	FILE *fp = fopen("data.txt", "r");	
//	if (fp == NULL) {		
//		printf("File not found\n");
//		return 0;
//	}
//
//	g = (GraphType *)malloc(sizeof(GraphType));		
//	graph_init(g);		
//	
//	while (!feof(fp)) {
//		fscanf(fp, "%d %d %d", &e.start, &e.end, &e.weight);	
//		if (graph_compare(g, e) == 1)	
//			insert_edge(g, e.start, e.end, e.weight);	
//		
//	}
//
//	kruskal(g);		
//
//	free(g);		
//	fclose(fp);		
//	return 0;
//}