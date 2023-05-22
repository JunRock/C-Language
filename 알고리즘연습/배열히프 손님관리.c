//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct {
//	char *name;
//}element;
//
//typedef struct {
//	element heap[100];
//	int heap_size;
//}HeapType;
//
//HeapType *create() {
//	return (HeapType*)malloc(sizeof(HeapType));
//}
//
//void insert_min_heap(HeapType *h, element data) {
//	int i;
//	i = (++(h->heap_size));
//
//	while (i != 1 && strcmp(data.name , h->heap[i / 2].name)<0) {
//		h->heap[i] = h->heap[i / 2];
//		i /= 2;
//	}
//	h->heap[i] = data;
//}
//
//void init(HeapType *h)
//{
//	h->heap_size = 0;
//}
//
//void delete_min_heap(HeapType *h)
//{
//	int parent, child; 
//	element item, temp; 
//
//	item = h->heap[1]; 
//	temp = h->heap[(h->heap_size)--]; 
//
//	parent = 1; 
//	child = 2; 
//
//	printf(">> º’¥‘(%s) ≈¿Â\n", item.name);
//	while (child <= h->heap_size) 
//	{
//		
//		if ((child < h->heap_size) && (strcmp(h->heap[child].name, h->heap[child + 1].name) < 0))
//			child++; 
//
//		if (strcmp(temp.name, h->heap[child].name) <= 0) 
//			break; 
//
//		h->heap[parent] = h->heap[child]; 
//		parent = child; 
//		child *= 2; 
//	}
//
//	h->heap[parent] = temp; 
//}
//
//void display(HeapType *h, int size)
//{
//	int i; 
//	printf("<»˜«¡ √‚∑¬>\n"); 
//	for (i = 1; i <= size; i++)
//	{
//		if (i == size) 
//		{
//			printf("%d: %s ", i, h->heap[i].name); 
//			return;
//		}
//		printf("%d: %s => ", i, h->heap[i].name); 
//	}
//}
//
//int main(void)
//{
//	FILE *fp; 
//	HeapType *heap; 
//	element *tmp; 
//	
//	char temp[100]; 
//	int cnt = 0; 
//	int count = 0; 
//	int i = 0; 
//	int size; 
//
//	heap = create(); 
//	init(heap);
//
//	fp = fopen("data2.txt", "r"); 
//
//	if (fp == NULL)
//	{
//		printf("∆ƒ¿œ ø¿«¬ Ω«∆–\n");
//		return 0;
//	}
//
//	while (!feof(fp))
//	{
//		fscanf(fp, "%s\n", temp); 
//		if (strcmp(temp, "i") == 0)
//			count++; 
//	}
//	rewind(fp); 
//	tmp = (element *)malloc(sizeof(element) * count); 
//
//
//	while (!feof(fp)) 
//	{
//		fscanf(fp, "%s", temp); 
//
//		if (strcmp(temp, "i") == 0) 
//		{
//			fscanf(fp, "%s\n", temp); 
//			size = strlen(temp); 
//			tmp[i].name = (char *)malloc(sizeof(char) * (size + 1));; 
//			strcpy(tmp[i].name, temp); 
//			insert_min_heap(heap, tmp[i]); 
//			printf(">> º’¥‘(%s) ¿‘¿Â\n", tmp[i++].name);
//			cnt++; 
//			display(heap, cnt); 
//			printf("\n\n");
//		}
//
//		if (strcmp(temp, "o") == 0) 
//		{
//			delete_min_heap(heap); 
//			cnt--; 
//			display(heap, cnt);
//			printf("\n\n");
//		}
//
//	}
//
//
//	fclose(fp); 
//	for (int j = 0; j < i; j++)
//		free(tmp[j].name); 
//	free(tmp); 
//	free(heap); 
//	return 0; 
//}