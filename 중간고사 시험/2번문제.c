//#include<stdio.h>
//#define MAX 100
//int oddsum(int n,int ncount)
//{
//	if (n % 2 == 0) 
//	{
//		return oddsum(n - 1,++ncount);
//	}
//	else if (n <= 1)
//	{
//		printf("계산된 횟수: %d\n",ncount+1);
//		return 1;
//	}
//	else
//		return n + oddsum(n - 2,++ncount);
//}
//
//int evensum(int n,int ncount)
//{
//	if (n <= 2)
//	{
//		printf("계산된 횟수: %d\n", ncount+1);
//		return 2;
//	}
//	if (n % 2 != 0) return evensum(n - 1,++ncount);
//	else return n + evensum(n - 2,++ncount);
//}
//
//int main()
//{
//	FILE *fp=fopen("data01.txt","r");
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	int arr[MAX];
//	int count = 0;
//	int ncount=0;
//	int a = 0;
//	int sum = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d", &arr[a]);
//		a++;
//		count++;
//	}
//
//	for (int i = 0; i < count; i++)
//	{
//		sum = 0;
//		if (arr[i] % 2 == 0)
//		{
//			printf("입력된 값:%d\n", arr[i]);
//			printf("합:%d", evensum(arr[i],ncount));
//			printf("\n\n");
//		}
//
//		else if (arr[i] % 2 != 0)
//		{
//			printf("입력된 값:%d\n", arr[i]);
//			printf("합:%d", oddsum(arr[i],ncount));
//			printf("\n\n");
//		}
//	}
//
//	fclose(fp);
//	return 0;
//}