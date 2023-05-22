/*
�ۼ���: 2022.05.24
�ۼ���: �� �� ��
���α׷���: ���Ḯ��Ʈ�� �̿��� ���׽��� ����
*/
#include<stdio.h>
#include<stdlib.h> //�����Ҵ��� ����ϱ� ���� stdlib.h ������� ����
#include<string.h>
typedef struct ListNode //��� Ÿ�� ����ü ����
{
	int coef; //���
	int expon; //����
	struct ListNode* link; //LinkNode�� ���� ���� ����Ű�� ���Ͽ� ����
}ListNode;

typedef struct ListType //���Ḯ��Ʈ ��� ����ü ����
{
	int size; //ListType ����
	ListNode* head; //ListNode head������ ����
	ListNode* tail; //ListNode tail������ ����
}ListType;

ListType* create() //����Ʈ ��� ���� �Լ�
{
	ListType* plist = (ListType*)malloc(sizeof(ListType)); //ListType ����ü �����Ҵ�
	plist->size = 0; //plist ����ü ������ 0���� �ʱ�ȭ
	plist->head = plist->tail = NULL; //plist�� �������� ��Ÿ���� ���Ͽ� head�� tail�� NULL�� �ʱ�ȭ
	return plist; //�ʱ�ȭ�� plist�� ��ȯ
}

void poly_print(ListType* plist) //���Ḯ��Ʈ ��带 ������ִ� �Լ�
{
	ListNode* p = plist->head; //ListNode ������ p�� ��������ͷ� �ʱ�ȭ
	for (; p != NULL; p = p->link) //p�� ���̻� ����Ű�°� ���������� p�� link�� ���Ͽ� ���������� �̵��ϸ鼭 �ݺ�
	{
		if (p->coef == 0) //���� ����� 0�̸� ������� ����
			continue;
		printf("%d^%d +", p->coef, p->expon); //p�� ����� ���� ���
	}
		
	printf("\n");
}

void insert_sort(ListType* plist, int coef, int expon) //���Ḯ��Ʈ�� ���� ���� ������������ �����ϴ� �Լ�
{
	ListNode* temp = (ListNode*)malloc(sizeof(ListNode)); //ListNodeŸ�� temp���� �����޸� �Ҵ�
	temp->coef = coef; // temp->coef�� ������ �޾ƿ� coef �ʱ�ȭ
	temp->expon = expon; //temp->expon�� ������ �޾ƿ� expon �ʱ�ȭ
	if (temp == NULL) //temp�� �����޸� �Ҵ翡 �����Ͽ��� ���
	{
		printf("error");
		exit(1);
	}
	temp->link = NULL; //temp ������ ����Ű�� ���� NULL
	if (plist->size == 0) //ListType�� plist�� ��尡 �ϳ��� �������� ���� ���
	{
		plist->head = plist->tail = temp; //head�����Ϳ� tail�����Ϳ� temp�ʱ�ȭ
	}
	else //ListType�� plist�� ��尡 �Ѱ� ������ ���
	{
		if (temp->expon > plist->head->expon) //temp�� ������ head�����Ͱ� ����Ű�� �������� ���� Ŭ ���
		{
			temp->link = plist->head; //temp->link�� head�� ����
			plist->head = temp; //temp�� ��������ͷ� ����

		}
		else if (temp->expon < plist->tail->expon) //temp�� ������ head�����Ͱ� ����Ű�� �������� ���� ���� ���
		{
			plist->tail->link = temp; //tail�� ����Ű�� ���� temp�� ����
			plist->tail = temp; //temp�� tail�����ͷ� ����
		}

		else //��尡 2�� �̻� ������ ��
		{
			ListNode * p, *pre = plist->head; //p�� ���縦 ����Ű��, pre�� �� ���� ����Ŵ, pre�� head�� �ʱ�ȭ
			p = pre->link; //pre->link�� ����Ű�� ���� p
			while (p != NULL) //p�� NULL�� ������������ �ݺ�
			{
				if (temp->expon < pre->expon&&temp->expon>p->expon) //temp������ pre�������� �۰�, p�������� ū ���
				{
					temp->link = p; //temp�� ����Ű�� ���� ���� p�� ����
					pre->link = temp; //pre�� ����Ű�� ���� ���� temp�� ����
					break;
				}
				else if (p->expon == expon) //���� �޾ƿ� ������ p�� ����Ű�� ������ ���� ���
				{
					p->coef += coef; //p�� ����Ű�� ������ �޾ƿ� ������ ���ؼ� p�� ����Ű�� ������ �ʱ�ȭ
				}
				
				p = p->link; //p�� ���� ���� ����Ű�� ��
				pre = pre->link; //pre�� ���� ���� ����Ű�� ��
			}
		}
	}
	plist->size++; //plist�� ���� ����
}

void poly_mul(ListType* list1, ListType* list2, ListType* list3) //��峢�� �����ִ� �Լ�
{
	ListNode* a = list1->head; //ListNode ������ a�� head�� �ʱ�ȭ

	int coef, expon; //���� ������ ���� ���� ������ ���� ����
	while (a != NULL) //a�� NULL�� �ƴ� �� ����
	{
		ListNode* b = list2->head; //ListNode ������ b�� head�� �ʱ�ȭ
		while (b != NULL) //b�� NULL�� �ƴ� �� ����
		{
			coef = a->coef * b->coef; //coef������ ListNode ������a�� ����Ű�� coef�� ListNode ������b�� ����Ű�� coef�� ����  ���� �ʱ�ȭ
			expon = a->expon + b->expon; //expon������ ListNode ������a�� ����Ű�� expon�� ListNode ������b�� ����Ű�� expon�� ���� ���� �ʱ�ȭ
			insert_sort(list3, coef, expon); //list3�����Ϳ� ����� coef�� expon�� �����Լ� ���ڷ� ���� 
			b = b->link; //b�� ���� ��带 ����Ű���� ��
		}
		a = a->link;//a�� ���� ��带 ����Ű���� ��
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
	ListType *list1, *list2, *list3; //ListType�� ������ *list1, *list2, *list3����
	list1 = create(); //list1 ����
	list2 = create(); //list2 ����
	list3 = create(); //list3 ����
	FILE* fp; //���������� ����
	int coef;
	int expon;
	char ch = NULL;
	char name1[100];
	char name2[100];
	fp = fopen("data.txt", "r"); //���� ����

	if (fp == NULL) //���� ���Ͽ� �������� ���� ���
	{
		fprintf(stderr, "error");
		exit(1);
	}

	fscanf(fp, "%s", &name1);
	while (!feof(fp))
	{
		fscanf(fp, "%d%d", &coef, &expon); //���Ͽ��� 2���� �Ͼ ���� coef�� expon�� ����
		fscanf(fp, "%c", &ch); //���Ͽ��� ���鹮�ڸ� ����
		if (strcmp(name1, "poly1") == 0) //ch1�� ���ڿ��� "poly1"�϶� list1�� ����
			insert_sort(list1, coef, expon);
		else //ch1�� ���ڿ��� "poly1"�ƴ� �� list2�� ����
			insert_sort(list2, coef, expon);
		if (ch == '\n') //���� ch�� �ٹٲ��� ������ �ݺ��� Ż��
			break;
	}

	fscanf(fp, "%s", &name2);
	while (!feof(fp))
	{
		fscanf(fp, "%d%d", &coef, &expon); //���Ͽ��� 2���� �Ͼ ���� coef�� expon�� ����
		fscanf(fp, "%c", &ch); //���Ͽ��� ���鹮�ڸ� ����
		if (strcmp(name2, "poly2") == 0) //ch2�� ���ڿ��� "poly2"�϶� list2�� ����
			insert_sort(list2, coef, expon);
		else //ch2�� ���ڿ��� "poly2"�ƴ� �� list1�� ����
			insert_sort(list1, coef, expon);
	}

	printf("poly1: ");
	poly_print(list1); //list1 ���
	printf("poly2: ");
	poly_print(list2); //list2 ���
	poly_mul(list1, list2, list3); //list1,list2,list3 �� ���ϴ� �Լ��� ����
	printf("poly3: ");
	poly_print(list3); //list3 ���
	for (int i = 0; i < list1->size; i++)//ListNode �����޸� �Ҵ� ����
		list1->head = delete(list1->head);
	for (int i = 0; i < list2->size; i++)//ListNode �����޸� �Ҵ� ����
		list2->head = delete(list2->head);
	for (int i = 0; i < list3->size; i++)//ListNode �����޸� �Ҵ� ����
		list3->head = delete(list3->head);

	free(list1); //ListType list1 �����޸� �Ҵ� ����
	free(list2); //ListType list2 �����޸� �Ҵ� ����
	free(list3); //ListType list3 �����޸� �Ҵ� ����	
	fclose(fp); //���� ����
}