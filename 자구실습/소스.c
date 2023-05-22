//#include<Stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE *fp;
//	int i,j;
//	int count = 0;
//	int num[4][10] = { 0 };
//	int scorenum = 0;
//	double scoreaverage = 0;
//	int sub[3] = { 0 };
//	fp = fopen("data.txt", "r");
//	if (fp == NULL)
//	{
//		printf("파일을 찾을 수 없습니다.");
//		return 0;
//	}
//
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d%d%d%d", &num[0][count], &num[1][count], &num[2][count], &num[3][count]);
//		count++;
//	}
//	for (i = 0;i < count; i++)
//	{
//		scorenum = num[1][i] + num[2][i] + num[3][i];
//		scoreaverage = scorenum / 3.0;
//		printf("%d %d %d %d %d %lf\n", num[0][i], num[1][i]
//			, num[2][i], num[3][i], scorenum, scoreaverage);
//
//		sub[0] += num[1][i];
//		sub[1] += num[2][i];
//		sub[2] += num[3][i];
//
//	}
//	printf("%lf %lf %lf\n", sub[0] / count, sub[1] / count, sub[2] / count);
//
//	return 0;
//	
//}