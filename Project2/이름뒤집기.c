//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE *fp = fopen("data.txt", "r");
//	int *p;
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	int tmp;
//	int count = 0;
//	int j = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &tmp);
//		count++;
//	}
//	p = (int*)malloc(sizeof(int)*count);
//	rewind(fp);
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &p[j++]);
//	}
//	int max = p[0];
//	int min = p[0];
//	for (int i = 0; i < count; i++)
//	{
//		if (max < p[i])
//			max = p[i];
//
//		if (min > p[i])
//			min = p[i];
//	}
//
//	printf("�ִ�>>%d\n", max);
//	printf("�ּ�>>%d", min);
//	fclose(fp);
//	free(p);
//
//}