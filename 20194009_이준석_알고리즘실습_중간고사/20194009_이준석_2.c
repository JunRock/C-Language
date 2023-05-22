#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct {
	int num;
	char name[10];
	int math;
	int eng;
	int kor;
	int total;
	double avg;
}element;

typedef struct {
	element heap[MAX];
	int heap_size;
}HeapType;

HeapType *create()
{
	return (HeapType *)malloc(sizeof(HeapType));
}

void init(HeapType *h)
{
	h->heap_size = 0;
}

void insert_max_heap(HeapType *h, element item)
{
	int i;
	i = ++(h->heap_size);
	while ((i != 1) && (item.total > h->heap[i / 2].total)) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;
}

element delete_max_heap(HeapType *h)
{
	element item, temp;
	int parent = 1;
	int	child = 2;

	item = h->heap[1];
	temp = h->heap[(h->heap_size)--];

	while (child <= h->heap_size) {
		if ((child < h->heap_size) && (h->heap[child].total < h->heap[child + 1].total))
			child++;
		if (temp.total >= h->heap[child].total) break;
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}

void heap_sort(element a[], int n)
{
	int i;
	HeapType *h;

	h = create();
	init(h);

	for (i = 0; i < n; i++)
		insert_max_heap(h, a[i]);

	for (i = (n - 1); i >= 0; i--)
		a[i] = delete_max_heap(h);
	free(h);
}

int main()
{
	FILE *fp = fopen("data02.txt", "r");
	element temp[MAX];
	element tmp;
	HeapType *root;
	root = create();
	init(root);
	int count = 0;
	
	
	if (fp == NULL) {
		printf("Error\n");
		exit(1);
	}

	while (!feof(fp)) {
		fscanf(fp, "%d %s %d %d %d", &tmp.num, tmp.name, &tmp.math, &tmp.eng, &tmp.kor);
		count++;
	}

	rewind(fp);

	while (!feof(fp)) {
		for (int i = 0; i < count; i++) {
			fscanf(fp, "%d %s %d %d %d", &temp[i].num, temp[i].name, &temp[i].math, &temp[i].eng, &temp[i].kor);
			temp[i].total = temp[i].math + temp[i].eng + temp[i].kor;
			temp[i].avg = (double)temp[i].total / 3;
		}
	}

	printf("정렬 전\n");
	printf("| 학    번 |  이름  | \t수학 | \t 영어 |  국어  |   총점 | 평 균 |\n");
	printf("----------------------------------------------------------------\n");

	for (int i = count-1; i >= 0; i--)
		printf("| %d | %s | %6d | %6d | %6d | %6d | %.2lf |\n", temp[i].num, temp[i].name, temp[i].math, temp[i].eng, temp[i].kor, temp[i].total, temp[i].avg);

	heap_sort(temp, count);

	printf("\n\n정렬 후\n");
	printf("| 학    번 |  이름  | \t수학 | \t 영어 |  국어  |   총점 | 평 균 |\n");
	printf("----------------------------------------------------------------\n");
	for (int i = 0; i < count; i++)
		printf("| %d | %s | %6d | %6d | %6d | %6d | %.2lf |\n", temp[i].num, temp[i].name, temp[i].math, temp[i].eng, temp[i].kor, temp[i].total, temp[i].avg);
	return 0;
}