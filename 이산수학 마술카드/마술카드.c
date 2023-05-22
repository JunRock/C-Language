#pragma comment(linker,"/STACK:10485760")
#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<time.h>
#define ROWS 15
#define COWS 32684


void opening();
void card_binary(int n, unsigned int m, unsigned int b[ROWS], unsigned int num_card[ROWS][COWS]);
int main()
{	
	unsigned int binary_num[ROWS]; //2진수 숫자가 들어가는 배열
	unsigned int num_card[ROWS][COWS] = { 0 };
	int i, j, k, t, count, r;
	int b = 65;
	int result = 1;
	int num_count;// 카드장수
	int max_num; //들어갈 수 있는 최대의 변수
	int tmp;//max_num변수를 임의로 저장하는 변수
	
	char ch[] = " ";
	char a;	
	/*opening();	
	Sleep(2000);
	system("cls");*/
	printf("몇 장의 카드를 이용하시겠습니까?");
	scanf("%d", &num_count);
	system("cls");
	max_num = pow(2, num_count);// 최대수	
	count = num_count * 6;	
	card_binary(num_count, max_num-1, binary_num,num_card);		
	for (i = 0; i < num_count; i++) //카드 장
	{
		t = 0;
		printf("|");
		for (int u = 1; u <= num_count; u++)// 모양 출력
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
		for (j = 0; j <= (max_num - 1) / (2 * num_count); j++) //해당 카드안에 있는 정수										
		{
			printf("|");
			for (r = 1; r <= num_count; r++)
			{
				if (num_card[i][t] == 0)
				{
					printf(" %4s ", ch);
					continue;
				}
				printf(" %4u ", num_card[i][t]);// 숫자 넣었음
				t++;				
			}
			printf(" |");
			printf("\n");
		}
		printf("|");

		for (int u = 0; u < num_count; u++) //마지막 줄 모양 출력
			printf("------");
		printf("-|");
		printf("\n");
		b++;
		printf("\n");
		while (1)
		{
			printf("원하는 숫자가 있습니까?\n(있으면 y, 없으면 n 을 눌러주세요.):   ");
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
				printf("다시 입력하세요!\n");
				continue;
			}
		}
	}
	printf("\n");
	printf("당신이 생각한 값은: %d입니다.\n", result - 1);

	return 0;
}

void opening()
{
	printf("\n\n\n\n\n\t\t\t|-----------------------------------------------------------------------|\n");
	printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
	printf("\t\t\t|\t\t\t마술카드 세계에 오신 걸 환영합니다.\t\t|\n \t\t\t|\t\t\t2초 뒤에 화면이 바뀝니다.\t\t\t|\n");
	printf("\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n\t\t\t|\t\t\t\t\t\t\t\t\t|\n");
	printf("\t\t\t|-----------------------------------------------------------------------|\n");
}

void card_binary(int n, unsigned int m, unsigned int b[ROWS], unsigned int num_card[ROWS][COWS])
{	
	//clock_t start, stop;
	//double duration = 0.0;
	int i, j, tmp;
	unsigned int k;
	//start = clock();
	for (i = 0; i < n; i++)//카드장수
	{
		int c = 0;
		int num = 1;
		for (k = 0; k < m; k++)//최대 숫자
		{
			tmp = num;
			for (j = 0; j < ROWS; j++) //2진수 탐색하는 조건문
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
	/*stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("%lf", duration);
	printf("\n");*/
}