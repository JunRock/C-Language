//#include<stdio.h>
//typedef struct {
//	int bank_name;
//	int money;
//	int sum;
// }Bank;
//
//int main() {
//	printf("����� ��õ�� �����Դϴ�\n");
//	Bank b[5];
//	int n;
//	int index = 0;
//	int out_money;
//	b[index].sum = 0;
//	while (1) {
//		printf("���� �輳\n");
//		printf("�Ա�\n");
//		printf("���\n");
//		printf("������\n");
//		printf("����� �����ϼ���");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//		{
//			printf("���¹�ȣ�� �Է��ϼ���>>");
//			scanf("%d", &b[index].bank_name);
//			printf("���µ�ϿϷ�!\n");
//			break;
//		}
//		case 2:
//		{
//			printf("�Ա��� �ݾ��� �Է��ϼ���>>");
//			scanf("%d", &b[index].money);
//			if (b[index].money % 1000 != 0)
//				printf("�Աݴ��� ����\n");
//			else {
//				b[index].sum += b[index].money;
//				printf("�ԱݿϷ�! ���� ���� �ܰ� %d", b[index].sum);
//			}
//			break;
//		}
//		case 3:
//		{
//			printf("����� �ݾ��� �Է��ϼ���>>");
//			scanf("%d", &out_money);
//			if (out_money > b[index].sum) {
//				printf("�ܰ�������� ��� �Ұ�\n");
//			}
//			else {
//				b[index].sum -= out_money;
//				printf("��ݿϷ�! ���� ���� �ܰ� %d", b[index].sum);
//			}
//			break;
//		}
//		case 4:
//			return 0;
//		}
//	}
//}