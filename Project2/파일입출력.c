//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	FILE *fp=fopen("data.txt","r");
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	int arr[5] = { 10000,5000,1000,500,100 };
//	int money;
//	int count;
//	int result = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &money);
//		if (money >= 10000)
//		{
//			result = money * 0.35;
//			printf("사용금액(%d) + 세금(%d)=%d\n", money, result, money + result);
//			money = money + result;
//			for (int i = 0; i < 5; i++)
//			{
//				count = 0;				
//				count = money / arr[i];
//				printf("%d원: %d\n", arr[i], count);
//				money = money % arr[i];
//			}
//			printf("=======================\n");
//		}
//
//		else if (money >= 7000&&money<10000)
//		{
//			result = money * 0.27;
//			printf("사용금액(%d) + 세금(%d)=%d\n", money, result, money + result);
//			money = money + result;
//			for (int i = 0; i < 5; i++)
//			{
//				count = 0;
//				count = money / arr[i];
//				printf("%d원: %d\n", arr[i], count);
//				money = money % arr[i];
//			}
//			printf("=======================\n");
//		}
//
//		else if (money >= 3000&&money<7000)
//		{
//			result = money * 0.2;
//			printf("사용금액(%d) + 세금(%d)=%d\n", money, result, money + result);
//			money = money + result;
//			for (int i = 0; i < 5; i++)
//			{
//				count = 0;
//				count = money / arr[i];
//				printf("%d원: %d\n", arr[i], count);
//				money = money % arr[i];
//			}
//			printf("=======================\n");
//		}
//
//		else if (money >= 1000&&money<3000)
//		{
//			result = money * 0.15;
//			printf("사용금액(%d) + 세금(%d)=%d\n", money, result, money + result);
//			money = money + result;
//			for (int i = 0; i < 5; i++)
//			{
//				count = 0;
//				count = money / arr[i];
//				printf("%d원: %d\n", arr[i], count);
//				money = money % arr[i];
//			}
//			printf("=======================\n");
//		}
//		else if (money< 1000)
//		{
//			result = money * 0;
//			printf("사용금액(%d) + 세금(%d)=%d\n", money, result, money + result);
//			money = money + result;
//			for (int i = 0; i < 5; i++)
//			{
//				count = 0;
//				count = money / arr[i];
//				printf("%d원: %d\n", arr[i], count);
//				money = money % arr[i];
//			}
//			printf("=======================\n");
//		}
//	}	 
//	fclose(fp);	
//}