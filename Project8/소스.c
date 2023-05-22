#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int hak;
	char name[20];
	int mat, eng, kor, tot;
	double avg;
}student;

typedef struct LinstNode {
	student data;
	struct ListNode *link;
} ListNode;

void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void insert_node(ListNode **phead, ListNode *p, ListNode *new_node)
{
	if (*phead == NULL)
	{
		new_node->link = NULL;
		*phead = new_node;
	}

	else if (p == NULL)
	{
		new_node->link = *phead;
		*phead = new_node;
	}

	else
	{
		new_node->link = p->link;
		p->link = new_node;
	}
}

void remove_node(ListNode *head)
{
	ListNode *p, *next;
	p = head;
	while (p != NULL)
	{
		next = p->link;
		free(p);
		p = next;
	}
}

void display(ListNode *head)
{
	ListNode* p = head;
	printf("┌━━━━━━━━━┬━━━━━━━┬━━━━━━┬━━━━━━┬━━━━━━┬━━━━━━┬━━━━━━━━┐\n");
	printf("│ 학    번│ 이 름 │ 수학 │ 영어 │ 국어 │ 총점 │ 평  균 │\n");
	printf("├━━━━━━━━━┼━━━━━━━┼━━━━━━┼━━━━━━┼━━━━━━┼━━━━━━┼━━━━━━━━┤\n");
	while (p != NULL)
	{
		printf(" %5d %7s %5d %5d %6d %8d %7.2lf\n", p->data.hak, p->data.name, p->data.mat, p->data.eng, p->data.kor, p->data.tot, p->data.avg);
		p = p->link;
	}
	printf("└━━━━━━━━━┴━━━━━━━┴━━━━━━┴━━━━━━┴━━━━━━┴━━━━━━┴━━━━━━━━┘\n\n");
	printf("\n");
}

ListNode *bubble_sort(ListNode *head)
{
	ListNode *p, *q;
	student tmp;

	for (p = head; p != NULL; p = p->link)
	{
		for (q = p; q != NULL; q = q->link)
		{
			if (q->data.tot > p->data.tot)
			{
				tmp = p->data;
				p->data = q->data;
				q->data = tmp;
			}
		}
	}
}

ListNode *create_node(student data, ListNode *link)
{
	ListNode *new_node;
	new_node = (ListNode*)malloc(sizeof(ListNode));

	if (new_node == NULL)
	{
		printf("error");
		exit(1);
	}
	new_node->data = data;
	new_node->link = link;
	return new_node;
}

void main()
{
	FILE *fp = NULL;
	ListNode *list1 = NULL;
	student tmp;

	fp = fopen("data2.txt", "r");

	if (fp == NULL)
	{
		printf("파일을 여는데 실패했습니다.");
		exit(1);
	}

	while (!feof(fp))
	{
		fscanf(fp, "%d %s %d %d %d", &tmp.hak, tmp.name, &tmp.mat, &tmp.eng, &tmp.kor);
		tmp.tot = tmp.mat + tmp.eng + tmp.kor;
		tmp.avg = tmp.tot / 3.0;
		insert_node(&list1, NULL, create_node(tmp, NULL));
	}
	bubble_sort(list1);
	display(list1);
	remove_node(list1);
	fclose(fp);
}