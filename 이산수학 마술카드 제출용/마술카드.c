#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#define ROWS 24
#define COWS 16777216

void opening();
void card_binary();
int main()
{
	unsigned int binary_num[ROWS]; //2���� ���ڰ� ���� �迭
	unsigned int num_card[ROWS][COWS] = { 0 };
	int i, j, k, answer, t, count, r;
	int b = 65;
	int result = 1;
	int num_count;// ī�����
	int max_num; //�� �� �ִ� �ִ��� ����
	int tmp;//max_num������ ���Ƿ� �����ϴ� ����

	char ch[] = " ";
	char a;
	opening();
	Sleep(2000);
	system("cls");
	printf("�� ���� ī�带 �̿��Ͻðڽ��ϱ�?");
	scanf("%d", &num_count);
	system("cls");
	max_num = pow(2, num_count);// �ִ��	
	system("cls");	
	count = num_count * 6;
	card_binary(num_count, max_num, binary_num, num_card);
	for (i = 0; i < num_count; i++) //ī�� ��
	{
		t = 0;
		printf("|");
		for (int u = 1; u <= num_count; u++)// ��� ���
			printf("------");
		printf("-|");
		printf("\n");
		printf("|");
		for (int u = 0; u < count / 2; u++)
			printf(" ");
		printf("%c", b);
		for (int u = 0; u < count / 2; u++)
			printf(" ");
		printf("|");
		printf("\n");
		for (j = 0; j <= (max_num - 1) / (2 * num_count); j++) //�ش� ī��ȿ� �ִ� ����										
		{
			printf("|");
			for (r = 1; r <= num_count; r++)
			{
				if (num_card[i][t] == 0)
				{
					printf(" %4s ", ch);
					continue;
				}
				printf(" %4d ", num_card[i][t]);// ���� �־���
				t++;
			}
			printf(" |");
			printf("\n");
		}
		printf("|");

		for (int u = 0; u < num_count; u++) //������ �� ��� ���
			printf("------");
		printf("-|");
		printf("\n");
		b++;
		printf("\n");
		while (1)
		{
			printf("���ϴ� ���ڰ� �ֽ��ϱ�?\n(������ y, ������ n �� �����ּ���.):   ");
			a = getchar();
			a = getchar();
			if (a == 'y')
			{
				result += pow(2, i) * 1;
				system("cls");
				break;
			}
			else if (a == 'n')
			{
				result += pow(2, i) * 0;
				system("cls");
				break;
			}
			else
			{
				printf("�ٽ� �Է��ϼ���!\n");
				continue;
			}
		}
	}
	printf("\n");
	printf("����� ������ ����: %d�Դϴ�.\n", result - 1);

	return 0;
}

void opening()
{
	printf("\n\n\n\n\n\t\t\t|-----------------------------------------------------------------------|\n");
	printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
	printf("\t\t\t|\t\t\t����ī�� ���迡 ���� �� ȯ���մϴ�.\t\t|\n \t\t\t|\t\t\t2�� �ڿ� ȭ���� �ٲ�ϴ�.\t\t\t|\n");
	printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
	printf("\t\t\t|-----------------------------------------------------------------------|\n");
}

void card_binary(int n, int m, unsigned int b[ROWS], unsigned int num_card[ROWS][COWS])
{
	int i, j, k, tmp;
	for (i = 0; i < n; i++)//ī�����
	{
		int c = 0;
		int num = 1;
		for (k = 0; k < m; k++)//�ִ� ����
		{
			tmp = num;
			for (j = 0; j <n; j++) //2���� Ž���ϴ� ���ǹ�
			{
				if (tmp > 0)
				{
					b[j] = tmp % 2;
					tmp = tmp / 2;
				}
			}
			if (b[i] == 1)
			{
				num_card[i][c] = num;
				c++;
			}
			num++;
		}
	}
}

