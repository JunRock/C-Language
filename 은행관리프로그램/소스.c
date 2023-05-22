//#include<stdio.h>
//typedef struct {
//	int bank_name;
//	int money;
//	int sum;
// }Bank;
//
//int main() {
//	printf("여기는 순천향 은행입니다\n");
//	Bank b[5];
//	int n;
//	int index = 0;
//	int out_money;
//	b[index].sum = 0;
//	while (1) {
//		printf("계좌 계설\n");
//		printf("입급\n");
//		printf("출금\n");
//		printf("나가기\n");
//		printf("기능을 선택하세요");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//		{
//			printf("계좌번호를 입력하세요>>");
//			scanf("%d", &b[index].bank_name);
//			printf("계좌등록완료!\n");
//			break;
//		}
//		case 2:
//		{
//			printf("입금할 금액을 입력하세요>>");
//			scanf("%d", &b[index].money);
//			if (b[index].money % 1000 != 0)
//				printf("입금단위 오류\n");
//			else {
//				b[index].sum += b[index].money;
//				printf("입금완료! 현재 은행 잔고 %d", b[index].sum);
//			}
//			break;
//		}
//		case 3:
//		{
//			printf("출금할 금액을 입력하세요>>");
//			scanf("%d", &out_money);
//			if (out_money > b[index].sum) {
//				printf("잔고부족으로 출금 불가\n");
//			}
//			else {
//				b[index].sum -= out_money;
//				printf("출금완료! 현재 은행 잔고 %d", b[index].sum);
//			}
//			break;
//		}
//		case 4:
//			return 0;
//		}
//	}
//}