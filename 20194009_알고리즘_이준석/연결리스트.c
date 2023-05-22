/*
	작성일: 2022.09.12
	작성자: 이준석
	프로그램명: 정렬알고리즘을 이용한 학생 정보 출력
*/
#include <stdio.h>
#include <stdlib.h> //동적할당을 사용하기 위해 stdlib.h 헤더파일 선언
#include<string.h>

int count = 0; //파일에 있는 학생의 수를 알기 위한 전역 변수

typedef struct student{ //학생정보를 담고 있는 구조체
	int hak; //학번을 나타내는 변수
	char name[20]; //이름을 나타내는 문자열
	int sum; //총합을 나타내는 변수
}student;

typedef struct ListNode { //연결리스트 ListNode구조체
	student data; //student 구조체 변수
	struct ListNode *link; //ListNode의 다음 항을 가리키기 위하여 선언
} ListNode;

void insert_node(ListNode **phead, ListNode *p, ListNode *new_node) //노드에 데이터 삽입해주는 함수
{
	if (*phead == NULL) //첫번째 데이터가 들어가는 경우
	{
		new_node->link = NULL; //새로운 노드의 link값을 NULL로 초기화
		*phead = new_node; //phead값을 new_node로 초기화
	}

	else //노드가 존재하는 경우
	{
		new_node->link = *phead; //new_node의 link가 phead를 가리킴
		*phead = new_node; //phead값을 new_node로 초기화
	}
}

ListNode *create_node(student data, ListNode *link) //노드를 생성해주는 함수
{
	ListNode *new_node = (ListNode*)malloc(sizeof(ListNode)); //new_node 변수 선언 및 동적으로 생성

	if (new_node == NULL) //생성이 되지 않았을 경우
	{
		printf("error");
		exit(1);
	}
	new_node->data = data; //new_node의 data값을 인자로 받은 data로 초기화
	new_node->link = link; //new_node의 link값을 인자로 받은 link로 초기화
	return new_node; //ListNode타입형의 new_node반환
}

void remove_node(ListNode *head) //연결리스트 노드를 해제해주는 함수
{
	ListNode *p, *next; //현재노드를 가리키는 노드p와 다음노드를 가리키는 next노드 선언
	p = head; //p노드를 head로 초기화
	while (p != NULL) //p노드가 NULL이 아닐때 까지
	{
		next = p->link; //p노드의 link가 next를 가리킴
		free(p); //p노드를 해제해줌
		p = next; //p노드에 next노드를 초기화
	}
}

void display(ListNode *head) // 정렬된 학생 정보를 출력해주는 함수
{
	ListNode* p = head; //현재노드를 가리키는 p노드 생성 및 head로 초기화
	printf("┌━━━━━━━━━┬━━━━━━━┬━━━━━┐\n"); 
	printf("│ 학    번│ 이 름 │ 총점│\n"); 
	
	while (p != NULL) // p노드가 NULL이 아닐 때 까지
	{
		printf("│%5d │%7s│%5d│ \n", p->data.hak, p->data.name, p->data.sum); // p노드의 data들을 출력
		p = p->link; // p를 다음 노드로 이동
	}
	printf("└━━━━━━━━━┴━━━━━━━┴━━━━━┘\n");
	printf("\n\n");
}

ListNode *bubble_sort(ListNode *head) //버블정렬 함수
{
	ListNode *p, *q, *r = NULL; //p는 현재 노드, q는 다음 노드, r은 이전노드

	for (int i = 0; i<count; i++) //학생 수 만큼 반복
	{
		p = head; //p에 head값 대입
		for (q=p->link;q!=NULL;q=q->link,p=p->link) //q를 p의 다음노드로 초기화한 후, q와p의 노드를 다음 노드로 변경하면서 반복실행
		{
			if (strcmp(p->data.name, q->data.name) > 0) //앞의 학생이 뒷 학생보다 뒷 순서 일때              
			{	
				if (p == head) //최초 노드 변경을 할 때
				{
					//p와 q의 위치를 바꾸는 과정            
					head = q; //head값에 q를 대입
					p->link = q->link;  //p노드의 link가 q의 다음노드를 가리킴
					q->link = p; //q의 link가 p노드를 가리킴
					r = q; //알고리즘을 p, q순으로 항상 붙어있게 하기 위해 r노드에 q노드를 복사
					q = p; //p노드를 q에 복사
					p = r; //p노드에 r대입을 하게 되면서 q, p순이었던 노드를 p, q순으로 변경
				}
				else //최초 노드 변경이 아닌 경우
				{
					p->link = q->link; //p노드의 link가 q의 다음노드를 가리킴
					q->link = p; //q의 link가 p노드를 가리킴
					r->link = q; //최초 노드 변경을 한 후, r -> q -> p 순으로 함
					r = q; //알고리즘을 p, q순으로 항상 붙어있게 하기 위해 r노드에 q노드를 복사
					q = p; //p노드를 q에 복사
					p = r; //p노드에 r대입을 하게 되면서 q, p순이었던 노드를 p, q순으로 변경
				}
			}
			r = p; //r은 p의 이전노드임을 나타냄
		}
	}
	return head; //ListNode타입형의 head값 반환
}

ListNode *insertion_sort(ListNode *head) //삽입정렬 함수
{
	ListNode *tmp = head; //tmp는 변경할 노드 
	ListNode *p, *next,*pre; // p는 현재노드, next는 다음노드, pre는 이전노드를 의미함
	while (tmp != NULL) // tmp가 NULL이 아닐 때 까지
	{
		next = tmp->link; // tmp의 link가 next를 가리킴 
		p = head; // p를 head로 초기화하면서 맨 앞을 가리킴
		while (p != next) // p노드가 next노드를 만나기 전까지 반복
		{
			if (p->data.sum < tmp->data.sum) //만약 p노드의 총점이 tmp노드의 총점보다 작을 경우 
			{
				tmp->link = p; //tmp노드를 p노드 앞으로 보내기 위해 tmp의 link가 p를 가리킴
				if (p == head) //p노드가 head일 때
					head = tmp; //head를 tmp로 초기화 하면서 tmp가 head를 가리키게 함
				else
					pre->link = tmp; //p노드가 head가 아닌 경우 pre의 link를 tmp에 연결

				while (p->link != tmp) //p노드의 link가 tmp를 만나기 전까지 반복
				{
					p = p->link; //p를 다음노드로 이동
				}
				p->link = next; //p노드의 link가 next를 가리키게 함
			}
			pre = p; //pre를 p로 초기화
			p = p->link; //p를 다음 노드로 이동
		}
		tmp = tmp->link; //tmp를 next로 초기화tmp
	}
	return head; //ListNode타입형의 head값 반환
}

ListNode *selection_sort(ListNode *head) //선택정렬 구현 함수
{
	ListNode *p = head; //p노드를 head로 초기화, p노드는 현재노드
	ListNode *min, *q; //최소값을 저장할 임시노드 min과 다음노드를 가리키는 q노드 선언
	student tmp; //값을 변경하기 위해 임시저장공간 구조체 변수
	for (int i = 0; i < count; i++) //학생 수 만큼 반복
	{
		q = p->link; //q노드를 p노드의 다음 노드로 초기화
		min = p; //맨 앞 원소를 가장 작은값으로 초기화
		for (int j = i + 1; j < count; j++) //맨 앞은 확인할 필요가 없으므로 j를 i+1로 초기화
		{
			if (q->data.hak < min->data.hak) //만약 q의 학번이 min의 학번보다 작을 때 
			{
				min = q; //q노드를 min노드에 초기화
			}
			q = q->link; //q노드를 다음 노드로 이동
		}

		tmp = p->data; //tmp구조체 변수에 p노드의 data값 초기화
		p->data = min->data; //p노드의 data값에 min노드의 data값 초기화
		min->data = tmp; //min노드의 data값에 tmp구조체변수 초기화

		p = p->link; //p를 다음 노드로 이동
	}
	return head; //ListNode타입형의 head값 반환
}

void main()
{
	FILE *fp = NULL; //파일 포인터 선언
	ListNode *list1 = NULL; //list1 노드 선언
	student tmp; //학생정보를 담고 있는 구조체 변수 선언
	fp = fopen("data.txt", "r"); //"data.txt"파일을 읽기모드로 파일 오픈

	if (fp == NULL) //파일이 존재하지 않을 때
	{
		printf("파일을 여는데 실패했습니다.");
		exit(1);
	}

	while (!feof(fp)) //파일의 끝을 만날 때 까지
	{
		fscanf(fp, "%d %s %d", &tmp.hak, tmp.name, &tmp.sum); //파일에서 학번, 이름, 총점을 읽음
		insert_node(&list1, NULL, create_node(tmp, NULL)); //insert_node함수로 전달
		count++; //파일에 있는 학생의 수를 파악하는 count변수 값을 1씩 증가
	}

	list1 = bubble_sort(list1); //버블정렬 출력
	printf("이름순 정렬(버블정렬)\n");
	display(list1);

	list1 = insertion_sort(list1); //삽입정렬 출력
	printf("총점 정렬(삽입정렬)\n");
	display(list1);

	list1 = selection_sort(list1); //선택정렬 출력
	printf("학번 순 정렬(선택정렬)\n");
	display(list1);

	remove_node(list1); //동적메모리 해제
	fclose(fp); //파일포인터 닫음
}