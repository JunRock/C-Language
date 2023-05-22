#include<Stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int i;
	int count = 0;
	int num[10][10] = { 0 };
	int scorenum = 0;
	double scoreaverage = 0;
	double sub[3] = { 0 };
	fp = fopen("data.txt", "r");
	if (fp == NULL)
	{
		printf("파일을 찾을 수 없습니다.");
		return 0;
	}

	while (!feof(fp))
	{
		fscanf(fp, "%d%d%d%d", &num[count][0], &num[count][1], &num[count][2], &num[count][3]);
		count++;
	}
	printf("|===========================================================|\n");
	printf("|     학 번     |  국 어  |  수 학  |  영 어  |\n");
	for (i = 0; i < count; i++)
	{
		scorenum = num[i][1] + num[i][2] + num[i][3];
		scoreaverage = scorenum / 3.0;
		printf("%d %d %d %d %d %.2lf\n", num[i][0], num[i][1]
			, num[i][2], num[i][3], scorenum, scoreaverage);

		sub[0] += num[i][1];
		sub[1] += num[i][2];
		sub[2] += num[i][3];

	}
	printf("\t%.2lf %.2lf %.2lf\n", sub[0] / (double)count, sub[1] / count, sub[2] / count);

	return 0;

}