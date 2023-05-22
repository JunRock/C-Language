//#include<stdio.h>
//#include<stdlib.h>
//#define TRUE 1
//#define FALSE 0
//#define MAX 100
//#define INF 1000000
//
//typedef struct {
//	int n;
//	int weight[MAX][MAX];
//}GrapeType;
//
//int found[MAX];
//int dist[MAX];
//
//int choose(int dist[], int n, int found[]) {
//	int i, min, minpos;
//	min = INF;
//	minpos = -1;
//	for (i = 0; i < n; i++) {
//		if (!found[i] && min > dist[i])
//		{
//			min = dist[i];
//			minpos = i;
//		}
//	}
//	return minpos;
//}
//
//void print_status(GrapeType *g) {
//	static int step = 1;
//	printf("step %d", step++);
//	printf("distance: ");
//	for (int i = 0; i < g->n; i++) {
//		if (dist[i] == INF)
//			printf(" * ");
//		else
//			printf("%2d ", dist[i]);
//	} 
//	printf("\n");
//	printf("found: ");
//	for (int i = 0; i < g->n; i++) {
//		printf("%2d ", found[i]);
//	}
//	printf("\n\n");
//}
//
//void shortest_path(GrapeType*g, int start) {
//	int i, u, w;
//	for (int i = 0; i < g->n; i++) {
//		dist[i] = g->weight[start][i];
//		found[i] = FALSE;
//	}
//
//	dist[start] = 0;
//	found[start] = TRUE;
//
//	for (int i = 0; i < g->n; i++) {
//		print_status(g);
//		u = choose(dist, g->n, found);
//		found[u] = TRUE;
//		for (w = 0; w < g->n; w++) {
//			if (!found[w])
//				if (dist[w] > dist[u] + g->weight[u][w])
//					dist[w] = dist[u] + g->weight[u][w];
//		}
//	}
//}
//
//int main(void) { 
//	GrapeType g = { 7,{{ 0,  7,  INF, INF,   3,  10, INF },
//{ 7,  0,    4,  10,   2,   6, INF },
//{ INF,  4,    0,   2, INF, INF, INF },
//{ INF, 10,    2,   0,  11,   9,   4 },
//{ 3,  2,  INF,  11,   0, INF,   5 },
//{ 10,  6,  INF,   9, INF,   0, INF },
//{ INF, INF, INF,   4,   5, INF,   0 } 
//	}
//	}; 
//	shortest_path(&g, 0);
//	return 0;
//}