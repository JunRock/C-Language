//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct element {
//	int num;
//	char name[100];
//	char cex[100];
//	char grade[100];
//}element;
//
//typedef struct Listnode {
//	element data;
//	struct Listnode *link;
//}Listnode;
//
//Listnode* insert_first(Listnode *head,element value)
//{
//	Listnode *p = (Listnode*)malloc(sizeof(Listnode));
//	p->data.num = value.num;
//	strcpy(p->data.name, value.name);
//	strcpy(p->data.cex, value.cex);
//	strcpy(p->data.grade, value.grade);
//
//	p->link = head;
//	head = p;
//	return head;
//}
//
//void print_list(Listnode *head)
//{
//	Listnode *p;
//	for (p = head; p != NULL; p = p->link)
//		printf("%d\t%s\t%s\t%s\n", p->data.num, p->data.name, p->data.cex, p->data.grade);
//}
//
//void print_male(Listnode *head)
//{
//	Listnode *p=head;
//	printf("|--학번--|--이름--|--성별--|--학년--|\n");
//	while (p != NULL)
//	{
//		if(strcmp(p->data.cex,"남자")==0)
//			printf("%d\t%s\t%s\t%s\n", p->data.num, p->data.name, p->data.cex, p->data.grade);
//		p = p->link;
//	}
//}
//
//void print_female(Listnode *head)
//{
//	Listnode *p=head;
//	printf("|-학 번-|-이 름-|-성 별-|-학 년-|\n");
//	while (p != NULL)
//	{
//		if (strcmp(p->data.cex, "여자") == 0)
//			printf("%d\t%s\t%s\t%s\n", p->data.num, p->data.name, p->data.cex, p->data.grade);
//		p = p->link;
//	}
//}
//
//int main()
//{
//	FILE *fp;
//
//	element data;
//	Listnode *head=NULL;
//	fp = fopen("data1.txt", "r");
//	if (fp == NULL)
//	{
//		fprintf(stderr, "error");
//		exit(1);
//	}
//	printf("학생 정보\n");
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d%s%s%s", &data.num, data.name, data.cex, data.grade);
//		head = insert_first(head,data);
//	}
//	print_list(head);
//	printf("\n\n");
//	printf("남자 학생 정보\n");
//	print_male(head);
//	printf("\n\n");
//	printf("여자 학생 정보\n");
//	print_female(head);
//	fclose(fp);
//	return 0;
//}