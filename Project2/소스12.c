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
//	unsigned int binary_num[ROWS]; //2진수 숫자가 들어가는 배열
//	unsigned int num_card[ROWS][COWS] = { 0 };
//	int i, j, k, t, count, r;
//	int b = 65;
//	int result = 1;
//	int num_count;// 카드장수
//	int max_num; //들어갈 수 있는 최대의 변수
//	int tmp;//max_num변수를 임의로 저장하는 변수
//	char ch[] = " ";
//	char a;
//	opening();
//	Sleep(2000);
//	system("cls");
//	printf("몇 장의 카드를 이용하시겠습니까?");
//	scanf("%d", &num_count);
//	system("cls");
//	max_num = pow(2, num_count);// 최대수
//	printf("1부터 %d까지 맘에 드는 숫자를 마음 속으로 생각하세요!", max_num - 1);
//	Sleep(1500);
//	system("cls");
//	count = num_count * 6;
//	card_binary(num_count, max_num, binary_num, num_card);//동적할당
//	for (i = 0; i < num_count; i++) //카드 장
//	{
//		t = 0;
//		printf("|");
//		if (num_count > 20) {
//			for (int u = 1; u <= 15; u++)// 모양 출력
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
//			for (int u = 1; u <= num_count; u++)// 모양 출력
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
//			for (j = 0; j <= (max_num - 1) / (2 * 15); j++) //해당 카드안에 있는 정수										
//			{
//				printf("|");
//				for (r = 1; r <= 15; r++)//한 줄에 출력되는 정수 갯수
//				{
//					if (num_card[i][t] == 0)
//					{
//						if (max_num >= 1000000 && max_num < 10000000)
//							printf(" %7s ", ch);
//						else if (max_num > 10000000)
//							printf(" %8s ", ch);
//						continue;
//					}
//					printf(" %4u ", num_card[i][t]);// 숫자 넣었음
//					t++;
//				}
//				printf(" |");
//				printf("\n");
//			}
//		}
//		else
//		{
//			for (j = 0; j <= (max_num - 1) / (2 * num_count); j++) //해당 카드안에 있는 정수										
//			{
//				printf("|");
//				for (r = 1; r <= num_count; r++)//한 줄에 출력되는 정수 갯수
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
//					printf(" %4u ", num_card[i][t]);// 숫자 넣었음
//					t++;
//				}
//				printf(" |");
//				printf("\n");
//			}
//		}
//		printf("|");
//		if (num_count > 20) {
//			if (max_num >= 1000000 && max_num < 10000000)
//				for (int u = 0; u < 27; u++) //마지막 줄 모양 출력
//					printf("-----");
//			else if (max_num >= 10000000)
//				for (int u = 0; u < 30; u++) //마지막 줄 모양 출력
//					printf("-----");
//		}
//		else
//		{
//			if (max_num < 10000)
//				for (int u = 0; u < num_count; u++) //마지막 줄 모양 출력
//					printf("------");
//			else if (max_num >= 10000 && max_num < 100000)
//				for (int u = 0; u < num_count; u++) //마지막 줄 모양 출력
//					printf("-------");
//			else if (max_num >= 100000 && max_num < 1000000)
//				for (int u = 0; u < num_count; u++) //마지막 줄 모양 출력
//					printf("--------");
//			else if (max_num >= 1000000 && max_num < 10000000)
//				for (int u = 0; u < num_count; u++) //마지막 줄 모양 출력
//					printf("---------");
//		}
//		printf("-|");
//		printf("\n");
//		b++;
//		printf("\n");
//		while (1)
//		{
//			printf("원하는 숫자가 있습니까?\n(있으면 y, 없으면 n 을 눌러주세요.):   ");
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
//				printf("다시 입력하세요!\n");
//				continue;
//			}
//
//		}
//	}
//	printf("\n");
//	printf("당신이 생각한 값은: %d입니다.\n", result - 1);
//	return 0;
//}
//
//void opening()
//{
//	printf("\n\n\n\n\n\t\t\t|-----------------------------------------------------------------------|\n");
//	printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
//	printf("\t\t\t|\t\t\t마술카드 세계에 오신 걸 환영합니다.\t\t|\n \t\t\t|\t\t\t2초 뒤에 화면이 바뀝니다.\t\t\t|\n");
//	printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
//	printf("\t\t\t|-----------------------------------------------------------------------|\n");
//}
//
//void card_binary(int num_count, unsigned int max_num, unsigned int binary_num[ROWS], unsigned int num_card[ROWS][COWS])
//{
//	int i, j, tmp;
//	unsigned int k;
//	for (i = 0; i < num_count; i++)//카드장수
//	{
//		int c = 0;
//		int num = 1;
//		for (k = 0; k < max_num; k++)//최대 숫자
//		{
//			tmp = num;
//			for (j = 0; j < num_count; j++) //2진수 탐색하는 조건문
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