#include<Stdio.h>

int main()
{
	FILE *fp;
	int i,j,sum;
	int count = 0;
	double average = 0;
	int year[8][12] = { 0 };

	fp = fopen("data.txt", "r");
	if (fp == NULL)
	{
		printf("������ ã�� �� �����ϴ�.");
		return 0;
	}

	while (!feof(fp))
	{
		fscanf(fp, "%d%d%d%d%d%d%d%d%d%d%d%d", &year[count][0], &year[count][1], &year[count][2], &year[count][3], &year[count][4], &year[count][5], &year[count][6],
			&year[count][7], &year[count][8], &year[count][9], &year[count][10], &year[count][11]);
		count++;
	}
	printf("|===========================================================================|\n");
	printf("| �⵵ |1�� |2�� |3�� |4�� |5�� |6�� |7�� |8�� |9�� |10��|11��|12��|�⺰����|\n");
	for (i = 0; i < count; i++)
	{
		sum = 0;
		printf("|200%d��|",i);
		for (j = 0; j < 12; j++)
		{
			printf("%3d |", year[i][j]);
			sum += year[i][j];
		}
		printf("%3d |", sum);		
		printf("\n");
	}
	printf("|========================================================================|\n");
	printf("|������|");
	for (i = 0; i < 12; i++)
	{
		sum = 0;
		average = 0;
		for (j = 0; j < count; j++)
			sum += year[j][i];
		average = (double)sum / (double)count;
		printf("%3.0lf |", average);
	}
	fclose(fp);
	return 0;
}