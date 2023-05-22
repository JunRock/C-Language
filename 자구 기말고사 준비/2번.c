//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct element {
//	char eng[100];
//	char kor[100+1];
//}element;
//
//
//typedef struct DListNode {
//	element data;
//	struct DListNode *llink;
//	struct DListNode *rlink;
//}DListNode;
//
//void init(DListNode* phead)
//{
//	phead->llink = phead;
//	phead->rlink = phead;
//}
//
//void insert(DListNode *before)
//{
//	DListNode *newnode = (DListNode*)malloc(sizeof(DListNode));
//	printf("단어는>>");
//	scanf("%s", newnode->data.eng);
//	printf("뜻은>>");
//	scanf("%s", newnode->data.kor);
//	newnode->llink = before;
//	newnode->rlink = before->rlink;
//	before->rlink->llink = newnode;
//	before->rlink = newnode;
//	printf("입력 완료\n");
//}
//
//void find(DListNode *phead)
//{
//	char s[20];
//	DListNode *p;
//	int count = 0;
//	printf("검색 단어는?>>");
//	scanf("%s", s);
//	printf("%s >> ",s);
//	for(p=phead->rlink;p!=phead;p=p->rlink)
//	{
//		if (strcmp(p->data.eng, s) == 0)
//		{
//			printf("%s\n", p->data.kor);
//			count++;
//		}		
//	}
//	if (count == 0)
//		printf("찾는 단어가 존재하지 않습니다.\n");	
//}
//
//void print_list(DListNode *phead)
//{
//	DListNode *p;
//	for (p = phead->rlink; p != phead; p = p->rlink)
//	{
//		printf("%s : %s\n", p->data.eng, p->data.kor);
//	}
//	
//}
//
//int main()
//{
//	DListNode *head =(DListNode*)malloc(sizeof(DListNode));
//	init(head);
//	char eng[100];
//	char kor[100];
//	int num;
//	while (1)
//	{
//		printf("명령어를 입력하시오:(1.입력  2.검색  3.출력  4.종료) >>");
//		scanf("%d", &num);
//		switch (num)
//		{
//		case 1:
//			insert(head);
//			break;
//		case 2:
//			find(head);
//			break;
//		case 3:
//			print_list(head);
//			break;
//		case 4:
//			printf("프로그램을 종료합니다");
//			return 0;
//		}
//	}
//}