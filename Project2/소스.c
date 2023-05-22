//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable : 4996)
//
//void swap(char *name, char*reverse);
//int main()
//{
//	char name[20], reverse[20] = { 0 };
//	FILE *fp;
//	fp = fopen("data.txt", "r");
//	if (fp == NULL)
//	{
//		printf("파일을 찾을 수 없습니다.");
//		return 0;
//	}
//	while (!feof(fp))
//	{
//		fscanf(fp, "%s", &name);
//	}
//	swap(name, reverse);
//	printf("뒤집은 이름: %s\n", reverse);
//	fclose(fp);
//
//}
//
//void swap(char*name, char *reverse)
//{
//	int count = strlen(name);
//	int i, j;
//	for (i = count-1,j=0; i >= 0; i--,j++)
//	{
//		reverse[j] = name[i];
//	}
//	reverse[j + 1] = '\0';
//}