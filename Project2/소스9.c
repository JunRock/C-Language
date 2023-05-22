//#include<stdio.h>
//#include<String.h>
//#include<stdlib.h>
//
//typedef struct NODE {
//	int year;
//	char title[50];
//	struct NODE *link;//링크필드
//}NODE;
//
//int main()
//{
//	int year;
//	char buffer[50];
//	NODE *p, *prev, *next;
//	NODE *list = NULL;
//	while (1)
//	{
//		printf("책의 제목을 입력하시오:");
//		gets_s(buffer, 50);
//		if (buffer[0] == '\0')
//			break;
//
//		p = (NODE*)malloc(sizeof(NODE));
//		strcpy(p->title, buffer);
//
//		printf("책의 출판연도를 입력하시오:");
//		gets_s(buffer, 50);
//		year = atoi(buffer);
//		p->year = year;
//
//		if (list == NULL)
//			list = p;
//
//		else
//			prev->link = p;
//		p->link = NULL;
//		prev = p;
//	}
//	
//	p = list;//시작점을 복사?
//	while (p != NULL)
//	{
//		printf("");
//		p = p->link;
//	}
//
//	p = list;
//	while (p != NULL)
//	{
//		next = p->link;
//		free(p);
//		next = p;
//	}
//	return 0;
//}