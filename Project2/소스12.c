//#include<stdio.h>
//#include<windows.h>
//#include<math.h>
//#include<string.h>
//#include<stdlib.h>
//#pragma comment(linker,"/stack:10737418240") //2gb 2147483648
//#define ROWS 24
//#define COWS 16777216
//
//void opening();
//void card_binary(int num_count, unsigned int max_num, unsigned int binary_num[ROWS], unsigned int num_card[ROWS][COWS]);
//int main()
//{
//	unsigned int binary_num[ROWS]; //2���� ���ڰ� ���� �迭
//	unsigned int num_card[ROWS][COWS] = { 0 };
//	int i, j, k, t, count, r;
//	int b = 65;
//	int result = 1;
//	int num_count;// ī�����
//	int max_num; //�� �� �ִ� �ִ��� ����
//	int tmp;//max_num������ ���Ƿ� �����ϴ� ����
//	char ch[] = " ";
//	char a;
//	opening();
//	Sleep(2000);
//	system("cls");
//	printf("�� ���� ī�带 �̿��Ͻðڽ��ϱ�?");
//	scanf("%d", &num_count);
//	system("cls");
//	max_num = pow(2, num_count);// �ִ��
//	printf("1���� %d���� ���� ��� ���ڸ� ���� ������ �����ϼ���!", max_num - 1);
//	Sleep(1500);
//	system("cls");
//	count = num_count * 6;
//	card_binary(num_count, max_num, binary_num, num_card);//�����Ҵ�
//	for (i = 0; i < num_count; i++) //ī�� ��
//	{
//		t = 0;
//		printf("|");
//		if (num_count > 20) {
//			for (int u = 1; u <= 15; u++)// ��� ���
//				printf("------");
//			printf("-|");
//			printf("\n");
//			printf("|");
//			for (int u = 0; u < 45; u++)
//				printf(" ");
//			printf("%c", b);
//			for (int u = 0; u < 45; u++)
//				printf(" ");
//			printf("|");
//			printf("\n");
//		}
//		else
//		{
//			for (int u = 1; u <= num_count; u++)// ��� ���
//				printf("------");
//			printf("-|");
//			printf("\n");
//			printf("|");
//			for (int u = 0; u < count / 2; u++)
//				printf(" ");
//			printf("%c", b);
//			for (int u = 0; u < count / 2; u++)
//				printf(" ");
//			printf("|");
//			printf("\n");
//		}
//
//		if (num_count > 20)
//		{
//			for (j = 0; j <= (max_num - 1) / (2 * 15); j++) //�ش� ī��ȿ� �ִ� ����										
//			{
//				printf("|");
//				for (r = 1; r <= 15; r++)//�� �ٿ� ��µǴ� ���� ����
//				{
//					if (num_card[i][t] == 0)
//					{
//						if (max_num >= 1000000 && max_num < 10000000)
//							printf(" %7s ", ch);
//						else if (max_num > 10000000)
//							printf(" %8s ", ch);
//						continue;
//					}
//					printf(" %4u ", num_card[i][t]);// ���� �־���
//					t++;
//				}
//				printf(" |");
//				printf("\n");
//			}
//		}
//		else
//		{
//			for (j = 0; j <= (max_num - 1) / (2 * num_count); j++) //�ش� ī��ȿ� �ִ� ����										
//			{
//				printf("|");
//				for (r = 1; r <= num_count; r++)//�� �ٿ� ��µǴ� ���� ����
//				{
//					if (num_card[i][t] == 0)
//					{
//						if (max_num >= 10000 && max_num < 100000)
//							printf(" %5s ", ch);
//						else if (max_num >= 100000 && max_num < 1000000)
//							printf(" %6s ", ch);
//						else if (max_num >= 1000000 && max_num < 10000000)
//							printf(" %7s ", ch);
//						else
//							printf(" %4s ", ch);
//						continue;
//					}
//					printf(" %4u ", num_card[i][t]);// ���� �־���
//					t++;
//				}
//				printf(" |");
//				printf("\n");
//			}
//		}
//		printf("|");
//		if (num_count > 20) {
//			if (max_num >= 1000000 && max_num < 10000000)
//				for (int u = 0; u < 27; u++) //������ �� ��� ���
//					printf("-----");
//			else if (max_num >= 10000000)
//				for (int u = 0; u < 30; u++) //������ �� ��� ���
//					printf("-----");
//		}
//		else
//		{
//			if (max_num < 10000)
//				for (int u = 0; u < num_count; u++) //������ �� ��� ���
//					printf("------");
//			else if (max_num >= 10000 && max_num < 100000)
//				for (int u = 0; u < num_count; u++) //������ �� ��� ���
//					printf("-------");
//			else if (max_num >= 100000 && max_num < 1000000)
//				for (int u = 0; u < num_count; u++) //������ �� ��� ���
//					printf("--------");
//			else if (max_num >= 1000000 && max_num < 10000000)
//				for (int u = 0; u < num_count; u++) //������ �� ��� ���
//					printf("---------");
//		}
//		printf("-|");
//		printf("\n");
//		b++;
//		printf("\n");
//		while (1)
//		{
//			printf("���ϴ� ���ڰ� �ֽ��ϱ�?\n(������ y, ������ n �� �����ּ���.):   ");
//			a = getchar();
//			a = getchar();
//			if (a == 'y')
//			{
//				result += pow(2, i) * 1;
//				system("cls");
//				break;
//			}
//			else if (a == 'n')
//			{
//				result += pow(2, i) * 0;
//				system("cls");
//				break;
//			}
//			else
//			{
//				printf("�ٽ� �Է��ϼ���!\n");
//				continue;
//			}
//
//		}
//	}
//	printf("\n");
//	printf("����� ������ ����: %d�Դϴ�.\n", result - 1);
//	return 0;
//}
//
//void opening()
//{
//	printf("\n\n\n\n\n\t\t\t|-----------------------------------------------------------------------|\n");
//	printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
//	printf("\t\t\t|\t\t\t����ī�� ���迡 ���� �� ȯ���մϴ�.\t\t|\n \t\t\t|\t\t\t2�� �ڿ� ȭ���� �ٲ�ϴ�.\t\t\t|\n");
//	printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
//	printf("\t\t\t|-----------------------------------------------------------------------|\n");
//}
//
//void card_binary(int num_count, unsigned int max_num, unsigned int binary_num[ROWS], unsigned int num_card[ROWS][COWS])
//{
//	int i, j, tmp;
//	unsigned int k;
//	for (i = 0; i < num_count; i++)//ī�����
//	{
//		int c = 0;
//		int num = 1;
//		for (k = 0; k < max_num; k++)//�ִ� ����
//		{
//			tmp = num;
//			for (j = 0; j < num_count; j++) //2���� Ž���ϴ� ���ǹ�
//			{
//				if (tmp > 0)
//				{
//					binary_num[j] = tmp % 2;
//					tmp = tmp / 2;
//				}
//			}
//			if (binary_num[i] == 1)
//			{
//				num_card[i][c] = num;
//				c++;
//			}
//			num++;
//		}
//	}
//}