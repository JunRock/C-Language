//#include<Stdio.h>
//#define ROWS 10
//#define COWS 10
//int main()
//{
//	int r,c,i,n,b,e;
//	
//	int ar[ROWS] = { 0 };
//	int br[COWS] = { 0 };
//	printf("��ʸ� �Է��Ͻÿ�:");
//	scanf("%d", &n);
//	for (b = 0; b < n; b++)
//	{
//		scanf("%d %d", &r, &c);
//		ar[b] = r;
//		br[b] = c;
//	}
//	for (e = 0; e < n; e++)
//	{
//		printf("��� #%d:\n", e+1);
//		int count = 0;
//		int count1 = 0;
//		for (i = 0; i < ar[e]; i++)//���� �ݺ�
//		{					
//			if (i == 0)
//			{
//				printf("..");
//				for (int m = 0; m < br[e] - 1; m++)
//					printf("+-");
//				printf("+\n");
//				printf("..");
//				for (int m = 0; m < br[e] - 1; m++)
//						printf("|.");
//					printf("|\n");
//			}
//			else
//			{
//				for (int m = 0; m < br[e]; m++)
//					printf("+-");
//				printf("+\n");
//				for (int m = 0; m < br[e]; m++)
//					printf("|.");
//				printf("|\n");
//				for (int m = 0; m < br[e]; m++)
//					printf("+-");
//				printf("+\n");
//			}				
//		}
//	}
//}