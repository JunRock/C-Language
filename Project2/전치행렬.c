//#include<stdio.h>
//#define ROWS 3
//#define COWS 4
//int main()
//{
//	FILE *fp = fopen("data.txt", "r");
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	int mat[ROWS][COWS];
//	int chm[COWS][ROWS];
//	while (!feof(fp))
//	{
//		for (int i = 0; i < ROWS; i++)
//		{
//			for (int j = 0; j < COWS; j++)
//				fscanf(fp, "%d", &mat[i][j]);
//		}		
//	}
//
//
//	for (int i = 0; i < COWS; i++)
//	{
//		for (int j = 0; j < ROWS; j++)
//		{
//			chm[i][j] = mat[j][i];
//			printf("%3d", chm[i][j]);
//		}
//		printf("\n");
//	}
//}