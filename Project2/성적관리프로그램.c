//#include<stdio.h>
//
//int main()
//{
//	int arr[5][4] = { 0 };
//	FILE *fp = fopen("data.txt", "r");
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//
//	int count = 0;
//	int sum = 0;
//	double a = 0.0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d%d%d%d", &arr[count][0], &arr[count][1], &arr[count][2], &arr[count][3]);
//		count++;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		sum = 0;
//		for (int j = 1; j < 4; j++)
//		{
//			sum += arr[i][j];
//			a = sum / 3.0;
//		}
//		printf("학번: %d / 국어: %d / 영어: %d / 수학: %d / 총 점:%d / 평균:%lf\n", arr[i][0], arr[i][1], arr[i][2],arr[i][3],sum,a);
//	}
//}