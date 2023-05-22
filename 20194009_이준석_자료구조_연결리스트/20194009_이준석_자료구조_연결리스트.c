/*
작성일: 2022.05.24
작성자: 이 준 석
프로그램명: 연결리스트를 이용한 다항식의 곱셈
*/
#include<stdio.h>
#include<stdlib.h> //동적할당을 사용하기 위해 stdlib.h 헤더파일 선언
#include<string.h>
typedef struct ListNode //노드 타입 구조체 선언
{
	int coef; //계수
	int expon; //지수
	struct ListNode* link; //LinkNode의 다음 항을 가리키기 위하여 선언
}ListNode;

typedef struct ListType //연결리스트 헤더 구조체 선언
{
	int size; //ListType 개수
	ListNode* head; //ListNode head포인터 선언
	ListNode* tail; //ListNode tail포인터 선언
}ListType;

ListType* create() //리스트 헤더 생성 함수
{
	ListType* plist = (ListType*)malloc(sizeof(ListType)); //ListType 구조체 동적할당
	plist->size = 0; //plist 구조체 개수를 0개로 초기화
	plist->head = plist->tail = NULL; //plist에 공백임을 나타내기 위하여 head와 tail에 NULL로 초기화
	return plist; //초기화된 plist값 반환
}

void poly_print(ListType* plist) //연결리스트 노드를 출력해주는 함수
{
	ListNode* p = plist->head; //ListNode 포인터 p를 헤드포인터로 초기화
	for (; p != NULL; p = p->link) //p가 더이상 가리키는게 없을때까지 p를 link를 통하여 다음항으로 이동하면서 반복
	{
		if (p->coef == 0) //만약 계수가 0이면 출력하지 않음
			continue;
		printf("%d^%d +", p->coef, p->expon); //p의 계수와 지수 출력
	}
		
	printf("\n");
}

void insert_sort(ListType* plist, int coef, int expon) //연결리스트에 들어가는 값을 내림차순으로 정렬하는 함수
{
	ListNode* temp = (ListNode*)malloc(sizeof(ListNode)); //ListNode타입 temp변수 동적메모리 할당
	temp->coef = coef; // temp->coef에 변수로 받아온 coef 초기화
	temp->expon = expon; //temp->expon에 변수로 받아온 expon 초기화
	if (temp == NULL) //temp가 동적메모리 할당에 실패하였을 경우
	{
		printf("error");
		exit(1);
	}
	temp->link = NULL; //temp 다음을 가리키는 항은 NULL
	if (plist->size == 0) //ListType형 plist에 노드가 하나도 존재하지 않을 경우
	{
		plist->head = plist->tail = temp; //head포인터와 tail포인터에 temp초기화
	}
	else //ListType형 plist에 노드가 한개 존재할 경우
	{
		if (temp->expon > plist->head->expon) //temp의 지수가 head포인터가 가리키는 지수보다 값이 클 경우
		{
			temp->link = plist->head; //temp->link을 head에 연결
			plist->head = temp; //temp를 헤드포인터로 선언

		}
		else if (temp->expon < plist->tail->expon) //temp의 지수가 head포인터가 가리키는 지수보다 값이 작을 경우
		{
			plist->tail->link = temp; //tail이 가리키는 항을 temp로 변경
			plist->tail = temp; //temp를 tail포인터로 선언
		}

		else //노드가 2개 이상 존재할 때
		{
			ListNode * p, *pre = plist->head; //p는 현재를 가리키고, pre는 그 전을 가리킴, pre를 head로 초기화
			p = pre->link; //pre->link가 가리키는 값은 p
			while (p != NULL) //p가 NULL을 만나기전까지 반복
			{
				if (temp->expon < pre->expon&&temp->expon>p->expon) //temp지수가 pre지수보단 작고, p지수보단 큰 경우
				{
					temp->link = p; //temp가 가리키는 다음 항을 p로 변경
					pre->link = temp; //pre가 가리키는 다음 항을 temp로 변경
					break;
				}
				else if (p->expon == expon) //새로 받아온 지수와 p가 가리키는 지수가 같을 경우
				{
					p->coef += coef; //p가 가리키는 차수와 받아온 차수를 더해서 p가 가리키는 차수에 초기화
				}
				
				p = p->link; //p가 다음 항을 가리키게 함
				pre = pre->link; //pre가 다음 항을 가리키게 함
			}
		}
	}
	plist->size++; //plist의 개수 증가
}

void poly_mul(ListType* list1, ListType* list2, ListType* list3) //노드끼리 곱해주는 함수
{
	ListNode* a = list1->head; //ListNode 포인터 a를 head로 초기화

	int coef, expon; //곱한 차수와 지수 값을 저장할 변수 선언
	while (a != NULL) //a가 NULL이 아닐 때 까지
	{
		ListNode* b = list2->head; //ListNode 포인터 b를 head로 초기화
		while (b != NULL) //b가 NULL이 아닐 때 까지
		{
			coef = a->coef * b->coef; //coef변수에 ListNode 포인터a가 가리키는 coef와 ListNode 포인터b가 가리키는 coef를 곱한  값을 초기화
			expon = a->expon + b->expon; //expon변수에 ListNode 포인터a가 가리키는 expon과 ListNode 포인터b가 가리키는 expon을 더한 값을 초기화
			insert_sort(list3, coef, expon); //list3포인터에 계산한 coef와 expon을 정렬함수 인자로 전달 
			b = b->link; //b가 다음 노드를 가리키도록 함
		}
		a = a->link;//a가 다음 노드를 가리키도록 함
	}
}

ListNode *delete(ListNode *head)
{
	ListNode *removed;
	if (head == NULL)
		return NULL;
	removed = head;
	head = removed->link;
	free(removed);
	return head;
}

int main()
{
	ListType *list1, *list2, *list3; //ListType형 포인토 *list1, *list2, *list3선언
	list1 = create(); //list1 생성
	list2 = create(); //list2 생성
	list3 = create(); //list3 생성
	FILE* fp; //파일포인터 선언
	int coef;
	int expon;
	char ch = NULL;
	char name1[100];
	char name2[100];
	fp = fopen("data.txt", "r"); //파일 오픈

	if (fp == NULL) //만약 파일에 존재하지 않은 경우
	{
		fprintf(stderr, "error");
		exit(1);
	}

	fscanf(fp, "%s", &name1);
	while (!feof(fp))
	{
		fscanf(fp, "%d%d", &coef, &expon); //파일에서 2개씩 일어서 각각 coef와 expon에 저장
		fscanf(fp, "%c", &ch); //파일에서 공백문자를 읽음
		if (strcmp(name1, "poly1") == 0) //ch1의 문자열이 "poly1"일때 list1에 대입
			insert_sort(list1, coef, expon);
		else //ch1의 문자열이 "poly1"아닐 때 list2에 대입
			insert_sort(list2, coef, expon);
		if (ch == '\n') //만약 ch가 줄바꿈을 만나면 반복문 탈출
			break;
	}

	fscanf(fp, "%s", &name2);
	while (!feof(fp))
	{
		fscanf(fp, "%d%d", &coef, &expon); //파일에서 2개씩 일어서 각각 coef와 expon에 저장
		fscanf(fp, "%c", &ch); //파일에서 공백문자를 읽음
		if (strcmp(name2, "poly2") == 0) //ch2의 문자열이 "poly2"일때 list2에 대입
			insert_sort(list2, coef, expon);
		else //ch2의 문자열이 "poly2"아닐 때 list1에 대입
			insert_sort(list1, coef, expon);
	}

	printf("poly1: ");
	poly_print(list1); //list1 출력
	printf("poly2: ");
	poly_print(list2); //list2 출력
	poly_mul(list1, list2, list3); //list1,list2,list3 를 곱하는 함수로 전달
	printf("poly3: ");
	poly_print(list3); //list3 출력
	for (int i = 0; i < list1->size; i++)//ListNode 동적메모리 할당 해제
		list1->head = delete(list1->head);
	for (int i = 0; i < list2->size; i++)//ListNode 동적메모리 할당 해제
		list2->head = delete(list2->head);
	for (int i = 0; i < list3->size; i++)//ListNode 동적메모리 할당 해제
		list3->head = delete(list3->head);

	free(list1); //ListType list1 동적메모리 할당 해제
	free(list2); //ListType list2 동적메모리 할당 해제
	free(list3); //ListType list3 동적메모리 할당 해제	
	fclose(fp); //파일 닫음
}