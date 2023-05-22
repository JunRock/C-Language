//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning (disable:4996)
//#define MAX         30
//#define MAX_SUBJECT 3
//typedef struct Student {
//	int regNo;//학생 번호
//	char name[MAX];//이름
//	int scores[MAX_SUBJECT];//국영수 점수 배열
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
//	printf("추가할 학생 번호: ");
//	scanf("%d", &num);
//	stu->regNo = num;
//
//	printf("추가할 학생 이름: ");
//	scanf("%s", stu->name);
//
//	printf("추가할 국어 성적: ");
//	scanf("%d", &(stu->scores[0]));
//
//	printf("추가할 영어 성적: ");
//	scanf("%d", &(stu->scores[1]));
//
//	printf("추가할 수학 성적: ");
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
//	printf("삭제할 학생 번호: ");
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
//			printf("삭제되었습니다.\n");
//			//return;
//		}
//	}
//	printf("데이터가 없습니다.\n");
//}
//
//void searchStudent(Student *head)
//{
//	Student *stu;
//	int num;
//	printf("검색할 학생 번호: ");
//	scanf("%d", &num);
//
//	for (stu = head->rlink; stu != head; stu = stu->rlink) {
//		if (stu->regNo == num) {
//			printf("학생번호 %d\n", stu->regNo);
//			printf("학생이름 %s\n", stu->name);
//			printf("국어 %d\n", stu->scores[0]);
//			printf("영어 %d\n", stu->scores[1]);
//			printf("수학 %d\n", stu->scores[2]);
//		}
//	}
//	printf("\n");
//}
//
//void printStudent(Student *phead)
//{
//	Student *p;
//	printf("번호\t이름 국어 영어 수학 성적이 -1인 곳은 미입력\n");
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
//		printf("<성적 관리 프로그램> 0: 종료\n");
//		printf("1: 학생 데이터 입력 2: 학생 데이터 삭제 3: 학생 검색 4: 목록 보기\n");
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
//			printf("명령을 잘못 입력했습니다.\n");
//			break;
//		}
//	} while (key != '0');
//	free(phead);
//	printf("프로그램 종료\n");
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