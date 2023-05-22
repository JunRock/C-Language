//#include<stdio.h>
//#include<stdlib.h>
//#define SWAP(x,y,temp)((temp)=(x),(x)=(y),(y)=(temp))
//
//int partition(int list[], int left, int right) {
//	int pivot;
//	int low, high;
//	int temp;
//	low = left;
//	high = right + 1;
//	pivot = list[left];
//
//	printf("\n- 피벗 :%d -\n", pivot);
//	do {
//		do {
//			low++;
//		} while (low<=right&&list[low]<pivot);
//
//		do {
//			high--;
//		} while (high>=left&&list[high]>pivot);
//
//		printf("Low: %d   High: %d\n", list[low], list[high]);
//
//		for (int i = 0; i < right + 1; i++)
//			printf("%d > ", list[i]);
//		printf("\n\n");
//
//
//		if (low < high) {
//			printf("%d와 %d 스왑\n", list[low], list[high]);
//			SWAP(list[low], list[high], temp);
//
//			for (int i = 0; i < right + 1; i++)
//				printf("%d > ", list[i]);
//			printf("\n\n");
//		}
//	} while (low<high);
//	SWAP(list[left], list[high], temp);
//	return high;
//}
//
//void quick_sort(int list[], int left, int right) {
//	if (left < right) {
//		int q = partition(list, left, right);
//		quick_sort(list, left, q - 1);
//		quick_sort(list, q + 1, right);
//	}
//}
//
//int main() {
//	FILE* fp = fopen("data.txt", "r");
//	int n = 0;
//	int tmp;
//	int* list;
//	if (fp == NULL) {
//		printf("error");
//		return 0;
//	}
//
//	while (!feof(fp)) {
//		fscanf(fp, "%d", &tmp);
//		n++;
//	}
//
//	list = (int*)malloc(sizeof(int) * n);
//	rewind(fp);
//	n = 0;
//	while (!feof(fp)) {
//		fscanf(fp, "%d", &list[n]);
//		n++;
//	}
//
//	printf("정렬 전 리스트\n");
//	for (int i = 0; i < n; i++)
//		printf("%d > ", list[i]);
//
//	quick_sort(list, 0, n - 1);
//
//	printf("정렬 후 리스트\n");
//	for (int i = 0; i < n; i++)
//		printf("%d > ", list[i]);
//
//	free(list);
//	fclose(fp);
//}