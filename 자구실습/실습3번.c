#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char element[100];
typedef struct DListNode {
	element name;
	int num;
	int kor;
	int eng;
	int math;
	struct DListNode *llink;
	struct DListNode *rlink;
}DListNode;

void init(DListNode *phead)
{
	phead->llink = phead;
	phead->rlink = phead;
}


void addStudent(DListNode *head)
{
	DListNode *newnode = (DListNode*)malloc(sizeof(DListNode));
	printf("추가할 학생번호:");
	scanf("%d", &newnode->num);
	printf("이름:");
	scanf("%s", &newnode->name);
	printf("국어 성적:");
	scanf("%d", &newnode->kor);
	printf("영어 성적:");
	scanf("%d", &newnode->eng);
	printf("수학 성적:");
	scanf("%d", &newnode->math);
	printf("\n");
	newnode->llink = head->llink;
	newnode->rlink = head;
	head->llink->rlink = newnode;
	head->llink = newnode;
}

void deleteStudent(DListNode *head)
{
	int delete;
	printf("삭제할 학생 번호:");
	scanf("%d", &delete);
	DListNode *removed=head->rlink;
	while (removed != head)
	{
		if (removed->num == delete)
		{
			removed->llink->rlink = removed->rlink;
			removed->rlink->llink = removed->llink;
			free(removed);
			printf("삭제되었습니다.\n\n");
			return;
		}
		removed = removed->rlink;
	}
	printf("찾는 학생이 없습니다.\n\n");
}

void findStudent(DListNode *phead)
{
	int search;
	printf("검색할 학생 번호:");
	scanf("%d", &search);
	DListNode *p;
	for (p = phead->rlink; p != phead; p = p->rlink)
	{
		if (p->num == search)
		{
			printf("%d\t%s\t%d\t%d\t%d\n\n", p->num, p->name, p->kor, p->eng, p->math);
			return;
		}
	}
	printf("찾는 학생이 없습니다.\n\n");
}

void printStudent(DListNode *phead)
{
	printf("번호\t이름\t국어\t영어\t수학\t성적이 -1인 곳은 미입력\n");
	DListNode *p;
	for (p = phead->rlink; p != phead; p = p->rlink)
	{
		printf("%d\t%s\t%d\t%d\t%d\n", p->num, p->name, p->kor, p->eng, p->math);
	}
	printf("\n");
}

int main()
{
	DListNode *head = (DListNode*)malloc(sizeof(DListNode));
	init(head);
	int menu,delete,search;
	int count = 0;
	int num, kor, eng, math;
	char name[100];
	do
	{
		printf("1: 학생 데이터 입력 2: 학생 데이터 삭제 3: 학생 검색 4: 목록보기\n");
		printf("메뉴를 입력하세요:");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1:
		{
			addStudent(head);
			break;
		}

		case 2:
		{
			deleteStudent(head);
			break;
		}

		case 3:
		{
			findStudent(head);
			break;
		}

		case 4:
		{
			printStudent(head);
			break;
		}
		default:
		{
			if (menu == 0)
				break;
			printf("해당 메뉴가 존재하지 않습니다.\n\n");
		}
		}
	} while (menu != 0);
	printf("프로그램 종료");
	free(head);
	return 0;
}