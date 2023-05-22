#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int class;
	char name[20];
}Teacher;

typedef struct
{
	char name[20];
	int class;
	int student_num;
	int math;
	int kor;
	int eng;
}Student;

typedef struct StudentNode
{
	Student data;
	struct StudentNode* link; // ÇÙ½É 
}StudentNode;

typedef struct TeacherNode
{
	Teacher data;
	struct TeacherNode* link; // ÇÙ½É 
}TeacherNode;

StudentNode* get_node_at(StudentNode* head, int pos)
{
	int i;
	StudentNode* tmp_node;

	if (pos < 0)
		return NULL;

	for (i = 0; i < pos; i++)
		tmp_node = tmp_node->link;

	return tmp_node;
}

TeacherNode* insert1(TeacherNode *head, Teacher value)
{
	TeacherNode *teacher = (TeacherNode*)malloc(sizeof(TeacherNode));
	teacher->data.class = value.class;
	strcpy(teacher->data.name, value.name);
	teacher->link = head;
	head = teacher;
	return head;
}

StudentNode *insert2(StudentNode*head, Student value)
{
	StudentNode *student = (StudentNode*)malloc(sizeof(StudentNode));
	strcpy(student->data.name, value.name);
	student->data.class = value.class;
	student->data.student_num = value.student_num;
	student->data.math = value.math;
	student->data.kor = value.kor;
	student->data.eng = value.eng;
	student->link = head;
	head = student;
	return head;
}

void print_student1(StudentNode *student, TeacherNode *teacher)
{
	TeacherNode *tea = teacher;
	StudentNode *p;
	printf("<1¹Ý>\n");
	printf("´ãÀÓ¼±»ý´Ô: %s\n", tea->data.name);
	for (p = student; p != NULL; p = p->link)
	{

		if (p->data.class == 1)
			printf("%d  %s  %d  %d  %d\n", p->data.student_num, p->data.name, p->data.math, p->data.kor, p->data.eng);

	}
}


void print_student2(StudentNode *student, TeacherNode *teacher)
{
	TeacherNode *tea = teacher->link;
	StudentNode *p;
	printf("<2¹Ý>\n");
	printf("´ãÀÓ¼±»ý´Ô: %s\n", tea->data.name);
	for (p = student; p != NULL; p = p->link)
	{

		if (p->data.class == 2)
			printf("%d  %s  %d  %d  %d\n", p->data.student_num, p->data.name, p->data.math, p->data.kor, p->data.eng);


	}
}

void print_student3(StudentNode *student, TeacherNode *teacher)
{
	TeacherNode *tea = teacher->link->link;
	StudentNode *p;
	printf("<3¹Ý>\n");
	printf("´ãÀÓ¼±»ý´Ô: %s\n", tea->data.name);
	for (p = student; p != NULL; p = p->link)
	{
		if (p->data.class == 3)
			printf("%d  %s  %d  %d  %d\n", p->data.student_num, p->data.name, p->data.math, p->data.kor, p->data.eng);

	}
}

void print_teacher(TeacherNode *head)
{
	TeacherNode *p;
	for (p = head; p != NULL; p = p->link)
	{
		printf("´ãÀÓ¼±»ý´Ô: %s\n", p->data.name);
	}
}

int main()
{
	Teacher data1;
	Student data2;
	TeacherNode *head1 = NULL;
	StudentNode *head2 = NULL;
	FILE *fp;
	fp = fopen("data02.txt", "r");
	if (fp == NULL)
	{
		fprintf(stderr, "error");
		exit(1);
	}
	char temp[20];

	fscanf(fp, "%s", temp);
	for (int i = 0; i < 3; i++)
	{
		fscanf(fp, "%d%s", &data1.class, data1.name);
		head1 = insert1(head1, data1);
	}

	fscanf(fp, "%s", temp);
	for (int i = 0; i < 8; i++)
	{
		fscanf(fp, "%s%d%d%d%d%d", data2.name, &data2.class, &data2.student_num, &data2.math, &data2.kor, &data2.eng);
		head2 = insert2(head2, data2);
	}

	printf("1¹Ý\n");
	print_student1(head2, head1);
	printf("2¹Ý\n");
	print_student2(head2, head1);
	printf("3¹Ý\n");
	print_student3(head2, head1);


}