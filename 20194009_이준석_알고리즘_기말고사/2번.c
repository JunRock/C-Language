//#include <stdio.h>
//#include <stdlib.h>
//#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )		
//
//int *list;	
//
//int search_binary(int list[],int key, int low, int high) {
//	int middle;
//	printf("<탐색과정>\n");
//	if (low <= high) {
//		middle = (low + high) / 2;
//		printf("Low : %d , High : %d , Middle Key : %d\n", low, high, middle);
//		if (key == list[middle])
//			return middle;
//		else if (key < list[middle])
//			return search_binary(list,key, low, middle - 1);
//		else
//			return search_binary(list,key, middle + 1, high);
//	}
//
//		return -1;
//	
//		
//}
//
//int main(void)
//{
//	int num, i = 0, count = 0;	
//	int n;
//	FILE *fp = fopen("data2.txt", "r");		
//	if (fp == NULL) {		
//		printf("File not found\n");
//		return 0;
//	}
//
//	while (!feof(fp)) {
//		fscanf(fp, "%d", &num);	
//		count++;	
//	}
//
//	list = (int *)malloc(sizeof(int) * count);	
//
//	rewind(fp);		
//
//	while (!feof(fp))
//		fscanf(fp, "%d", &list[i++]);	
//
//	printf("탐색할 값을 입력하시오 : ");
//	scanf("%d", &n);
//	search_binary(list, n, 0, count);
//	printf("탐색완료\n");
//	free(list);		
//	fclose(fp);	
//	return 0;
//}