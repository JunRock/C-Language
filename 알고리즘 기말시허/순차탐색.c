#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int seq_search(int key, int low, int high, int list[]) {
	int i;
	for (i = low; i <= high; i++)
		if (list[i] == key)
			return i;
	return -1;
}

int seq_search2(int key, int low, int high, int list[]) {
	int i;
	list[high + 1] = key;
	for (i = low; list[i] != key; i++);
	if (i == (high + 1)) return -1;
	else
		return i;
}


int main() {
	FILE* fp = fopen("data2.txt", "r");
	int i, key;
	int count = 0;
	int* list;
	int flag1, flag2;
	float result1, result2;
	clock_t start, end, start2, end2;
	if (fp == NULL) {
		printf("Error");
		return;
	}
	while (!feof(fp)) {
		fscanf(fp, "%d", &i);
		count++;
	}
	rewind(fp);

	list = (int*)malloc(sizeof(int) * count);
	count = 0;
	while (!feof(fp)) {
		fscanf(fp, "%d", &list[count]);
		count++;
	}

	printf("데이터 개수 : %d\n", count);
	printf("검색할 정수를 입력하세요 : ");
	scanf("%d", &key);
	start = clock();
	flag1 = seq_search(key, 0, count - 1, list);
	end = clock();

	start2 = clock();
	flag2 = seq_search2(key, 0, count - 1, list);
	end2 = clock();

	result1 = (float)(end - start) / CLOCKS_PER_SEC;
	result2 = (float)(end2 - start2) / CLOCKS_PER_SEC;

	if (flag1 != -1 && flag2 != -1) {
		printf("검색성공\n");
		printf("순차검색 속도 : %f\n", result1);
		printf("개선된 순차검색 속도 : %f\n", result2);
	}

	else
		printf("탐색실패\n");

}
