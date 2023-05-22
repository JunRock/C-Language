#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 100
#define INF 1000000

typedef struct GrapeType {
	int n;
	int weight[MAX_VERTICES][MAX_VERTICES];
}GrapeType;

int distance[MAX_VERTICES];
int found[MAX_VERTICES];

void print_status(GrapeType *g) {
	static int step = 1;
	printf("STEP %d: ", step++);
	printf("distance: ");

	for (int i = 0; i < g->n; i++) {
		if (distance[i] == INF)
			printf("* ");
		else
			printf("%2d ", distance[i]);
	}

	printf("\n");
	printf("found: ");
	for (int i = 0; i < g->n; i++) {
		printf("%2d", found[i]);
	}

	printf("\n\n");
}

int choose(int distance[], int n, int found[]) {
	int i, min, minpos;
	min = INF;
	minpos = -1;

	for (int i = 0; i < n; i++) {
		if (distance[i] < min && !found[i]) {
			min = distance[i];
			minpos = i;
		}
	}
	return minpos;//인덱스 값
}

void shorttest_path(GrapeType *g, int start) {
	int i, u, w;
	for (i = 0; i < g->n; i++) {
		distance[i] = g->weight[start][i];
		//0,7,INF,INF,3,10,INF
		found[i] = FALSE; 
	}

	found[start] = TRUE;
	distance[start] = 0;

	for (i = 0; i < g->n - 1; i++) {
		print_status(g);
		u = choose(distance, g->n, found);
		found[u] = TRUE;
		for (w = 0; w < g->n; w++) {
			if (!found[w])
				if (distance[u] + g->weight[u][w] < distance[w])
					distance[w] = distance[u] + g->weight[u][w];
		}
	}
}

int main() {
	GrapeType g = { 7,
	{{0,7,INF,INF,3,10,INF},
	{7,0,4,10,2,6,INF},
	{INF,4,0,2,INF,INF,INF},
	{INF,10,2,0,11,9,4},
	{3,2,INF,11,0,INF,5},
	{10,6,INF,9,INF,0,INF},
	{INF,INF,INF,4,5,INF,0} }
	};

	shorttest_path(&g, 0);
	printf("20194009_이준석");
	return 0;
}

