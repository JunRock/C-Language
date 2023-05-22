#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define SWAP(x,y,t) (t=x,x=y,y=t)
int list[5];

void print(int list[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		printf("%3d ", list[i]);
		count++;
		if (count % 20 == 0)
			printf("\n");
	}
}

void selection_sort(int list[], int n) {
	int i, j, least;
	int temp;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++)
			if (list[j] < list[least])
				least = j;
		SWAP(list[i], list[least], temp);
	}
}

void insertion_sort(int list[], int n) {
	int i, j;
	int key;
	for (i = 1; i < n; i++) {
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; j--)
			list[j + 1] = list[j];
		list[j + 1] = key;
	}
}

void bubble_sort(int list[], int n) {
	int i, j;
	int temp;
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++)
			if (list[j] > list[j + 1])
				SWAP(list[j], list[j + 1], temp);

	}
}

void inc_insertion_sort(int list[], int first, int last, int gap) {
	int i, j;
	int key;
	for (i = first + gap; i <= last; i = i + gap) {
		key = list[i];
		for (j = i - gap; j >= first && list[j] > key; j = j - gap)
			list[j + gap] = list[j];
		list[j + gap] = key;
	}
}

void shell_sort(int list[], int n) {
	int i, gap;
	for (gap = n / 2; gap > 0; gap = gap / 2) {
		if ((gap % 2) == 0) gap++;
		for (i = 0; i < gap; i++)
			inc_insertion_sort(list, i, n - 1, gap);
	}
}

int main() {

	clock_t start, end;
	double duration = 0.0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++) {
		list[i] = (rand() % 5) + 1;
		for (int j = 0; j < i; j++)
			if (list[i] == list[j])
				i--;
	}

	printf("<정렬 전>\n");
	//print(list, 30000);

	/*printf("\n\n<선택정렬>\n");
	start = clock();
	selection_sort(list, 30000);
	end = clock();
	duration = end - start;
	printf("선택정렬 걸린시간: %f\n", duration / 1000);
	print(list, 30000);*/

	printf("\n\n<삽입정렬>\n");
	start = clock();
	insertion_sort(list, 5);
	end = clock();
	duration = end - start;
	printf("삽입정렬 걸린시간: %f\n", duration / 1000);
	print(list, 5);

	/*printf("\n\n<버블정렬>\n");
	start = clock();
	bubble_sort(list, 30000);
	end = clock();
	duration = end - start;
	printf("버블정렬 걸린시간: %f\n", duration / 1000);
	print(list, 30000);

	printf("\n\n<쉘정렬>\n");
	start = clock();
	shell_sort(list, 30000);
	end = clock();
	duration = end - start;
	printf("쉘정렬 걸린시간: %f\n", duration / 1000);
	print(list, 30000);
	printf("20194009이준석");*/
}