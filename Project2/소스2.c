//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//
//void main()
//{
//	FILE*fp=fopen("data1.txt","r");
//	int tmp,i;
//	int ncount = 0;
//	int *p;
//	int max = 0;
//	int min = 0;
//	if (fp == NULL)
//	{
//		printf("����");
//		return 0;
//	}
//
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &tmp);
//		ncount++;
//	}
//	p = (int*)malloc(sizeof(int)*ncount);
//	rewind(fp);//������ �պκ��� ����Ŵ
//	ncount = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &p[ncount]);
//		ncount++;
//	}
//
//	for (i = 0; i < ncount; i++)
//	{
//		printf("%d\t", p[i]);
//	}
//	max = p[0];
//	min = p[0];
//	for (i = 0; i < ncount; i++)
//	{
//		if (max < p[i])
//			max = p[i];
//		if (min > p[i])
//			min = p[i];
//	}
//	printf("\n�ִ밪: %d\n", max);
//	printf("�ּҰ�: %d", min);
//	free(p);
//	fclose(fp);
//}