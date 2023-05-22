//#include<Stdio.h>
//#include<math.h>
//#define MAX 100
//typedef struct POINT {
//	double x;
//	double y;
//}POINT;
//
//int main()
//{
//	FILE *fp=fopen("data.txt","r");
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	int tmp[MAX];
//	int a = 0;
//	int count = 0;
//	POINT *p;
//	p = (POINT*)malloc(sizeof(POINT));
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &tmp[a]);
//		a++;
//		count++;
//	}
//	int j = 0;
//	for (int i = 0; i < count; i++)
//	{
//		p->x = tmp[j++];
//		p->y = tmp[j++];
//
//	}
//}