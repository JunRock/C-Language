//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning (disable:4996)
//#define MAX         30
//#define MAX_SUBJECT 3
//typedef struct Student {
//	int regNo;//�л� ��ȣ
//	char name[MAX];//�̸�
//	int scores[MAX_SUBJECT];//������ ���� �迭
//	struct Student *llink;
//	struct Student *rlink;
//}Student;
//
//Student *head;
//
//void init(Student *phead)
//{
//	phead->llink = phead;
//	phead->rlink = phead;
//	head = (Student *)malloc(sizeof(Student));
//}
//
//void addStudent(Student *before)
//{
//	int num;
//	Student *stu = (Student*)malloc(sizeof(Student));
//	printf("�߰��� �л� ��ȣ: ");
//	scanf("%d", &num);
//	stu->regNo = num;
//
//	printf("�߰��� �л� �̸�: ");
//	scanf("%s", stu->name);
//
//	printf("�߰��� ���� ����: ");
//	scanf("%d", &(stu->scores[0]));
//
//	printf("�߰��� ���� ����: ");
//	scanf("%d", &(stu->scores[1]));
//
//	printf("�߰��� ���� ����: ");
//	scanf("%d", &(stu->scores[2]));
//
//	stu->llink = before;
//	stu->rlink = before->rlink;
//	before->rlink->llink = stu;
//	before->rlink = stu;
//}
//
//void deleteStudent(Student *head)
//{
//	Student *stu;
//	;
//	
//	int regNo;
//	printf("������ �л� ��ȣ: ");
//	scanf("%d", &regNo);
//
//	for (stu = head->rlink; stu != head; stu = stu->rlink) {
//		if (stu->regNo == regNo)
//		{
//			Student *removed = (Student*)malloc(sizeof(Student));
//			stu->llink->rlink = stu->rlink;
//			stu->rlink->llink = stu->llink;
//			removed = stu->llink;
//
//			free(removed);
//			printf("�����Ǿ����ϴ�.\n");
//			//return;
//		}
//	}
//	printf("�����Ͱ� �����ϴ�.\n");
//}
//
//void searchStudent(Student *head)
//{
//	Student *stu;
//	int num;
//	printf("�˻��� �л� ��ȣ: ");
//	scanf("%d", &num);
//
//	for (stu = head->rlink; stu != head; stu = stu->rlink) {
//		if (stu->regNo == num) {
//			printf("�л���ȣ %d\n", stu->regNo);
//			printf("�л��̸� %s\n", stu->name);
//			printf("���� %d\n", stu->scores[0]);
//			printf("���� %d\n", stu->scores[1]);
//			printf("���� %d\n", stu->scores[2]);
//		}
//	}
//	printf("\n");
//}
//
//void printStudent(Student *phead)
//{
//	Student *p;
//	printf("��ȣ\t�̸� ���� ���� ���� ������ -1�� ���� ���Է�\n");
//	for (p = phead->rlink; p != phead; p = p->rlink)
//	{
//		printf("%d\t%s %d %d %d\n", p->regNo, p->name, p->scores[0], p->scores[1], p->scores[2]);
//	}
//	printf("\n");
//}
//
//void run(Student *phead)
//{
//	int key;
//	do {
//		printf("<���� ���� ���α׷�> 0: ����\n");
//		printf("1: �л� ������ �Է� 2: �л� ������ ���� 3: �л� �˻� 4: ��� ����\n");
//		scanf("%d", &key);
//
//		switch (key) {
//		case 1:
//			addStudent(phead);
//			break;
//		case 2:
//			deleteStudent(phead);
//			break;
//		case 3:
//			searchStudent(phead);
//			break;
//		case 4:
//			printStudent(phead);
//			break;
//		default:
//			printf("����� �߸� �Է��߽��ϴ�.\n");
//			break;
//		}
//	} while (key != '0');
//	free(phead);
//	printf("���α׷� ����\n");
//}
//
//int main()
//{
//	Student *head;
//	head = (Student *)malloc(sizeof(Student));
//	init(head);
//	run(head);
//	free(head);
//	return;
//}