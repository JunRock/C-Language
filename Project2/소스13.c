///*#include<Stdio.h>
//#include<stdlib.h>
//#define MAX 101
////모든 항을 다 더하는 다항식
//typedef struct {
//	int degree;
//	float coef[MAX];
//}poly;
//
//poly add(poly a, poly b)
//{
//	poly c;
//	int A = 0, B = 0, C = 0;
//	int i;
//	int dea = a.degree;
//	int deb = b.degree;
//	if (a.degree > b.degree)
//		c.degree = a.degree;
//	else
//		c.degree = b.degree;
//	while (A<=a.degree&&B<=b.degree)
//	{
//		if (dea > deb)
//		{
//			c.coef[C++] = a.coef[A++];
//			dea--;
//		}
//
//		else if (dea == deb)
//		{
//			c.coef[C++] = a.coef[A++] + b.coef[B++];
//			dea--; deb--;
//		}
//
//		else
//		{
//			c.coef[C++] = b.coef[B++];
//				deb--;
//		}
//	}
//	return c;
//
//}
//
//void poly_print(poly a)
//{
//	int i = 0;
//	for (i = a.degree; i >0; i--)
//		printf("%3.1lfx^%d + ", a.coef[a.degree-i], i);
//	printf("%3.1lfx^%d\n", a.coef[a.degree], i);	
//}
//
//int main()
//{
//	poly a = { 5,{3,6,0,0,0,10} };
//	poly b = { 4,{7,0,5,0,1} };
//	poly c = add(a, b);
//	poly_print(a);
//	poly_print(b);
//	printf("------------------------------------------\n");
//	poly_print(c);
//}*///다항식 전체 표현 코드
//
///*#include<Stdio.h>
//#include<stdlib.h>
//#define MAX 101 
//
//typedef struct {
//	float coef;
//	int expon;
//}poly;
//
//poly terms[MAX] = { {8,3},{7,1},{1,0},{10,3},{3,2},{1,0} };
//int avail = 6;
//
//char compare(int a, int b)
//{
//	if (a > b) return '>';
//	else if (a == b) return '=';
//	else return '<';
//}
//void attach(float coef, int expon)
//{
//	if (avail > MAX)
//		printf("다항식 초과");
//	terms[avail].coef = coef;
//	terms[avail].expon = expon;
//	avail++;
//}
//
//void poly_print(int a,int b)
//{
//	for (int i = a; i < b; i++)
//		printf("%3.1lfx^%d + ", terms[i].coef, terms[i].expon);
//	printf("%3.1lfx^%d \n", terms[b].coef, terms[b].expon);
//}
//
//void add(int As,int Ae,int Bs,int Be,int *Cs,int *Ce)
//{
//	float tempcoef;
//	*Cs = avail;
//	while (As <= Ae && Bs <= Be)
//	{
//		switch (compare(terms[As].expon, terms[Bs].expon))
//		{
//		case '>':
//		{
//			attach(terms[As].coef, terms[As].expon);
//			As++;
//			break;
//		}
//		case '=':
//		{
//			tempcoef = terms[As].coef + terms[Bs].coef;
//			attach(tempcoef, terms[As].expon);
//			As++; Bs++;
//			break;
//		}
//		case '<':
//		{
//			attach(terms[Bs].coef, terms[Bs].expon);
//			Bs++;
//			break;
//		}
//		}
//	}
//	for (; As < Ae; As++)  //남은 항 계산
//		attach(terms[As].coef, terms[As].expon);
//	for (; Bs < Be; Bs++)
//		attach(terms[Bs].coef, terms[Bs].expon);
//	*Ce = avail - 1;
//}
//
//
//
//
//int main()
//{
//	int As = 0, Ae = 2, Bs = 3, Be = 5, Cs, Ce;
//	add(As, Ae, Bs, Be, &Cs, &Ce);
//	poly_print(As, Ae);
//	poly_print(Bs, Be);
//	printf("---------------------------------------\n");
//	poly_print(Cs, Ce);
//	return 0;
//}*/  //다항식 항 있는 거만 표현한 코드
//
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 100
//
//typedef struct {
//	int row;
//	int col;
//	int value;
//}element;
//
//typedef struct {
//	element data[MAX];
//	int rows;
//	int cows;
//	int values;
//}matrix;
//
//void matrix_print(matrix a)
//{
//	printf("===========================\n");
//	for (int i = 0; i < a.values; i++)
//	{
//		printf("%d %d %d\n", a.data[i].row, a.data[i].col, a.data[i].value);
//	}
//	printf("===========================\n");
//}
//
//matrix trans(matrix a)
//{
//	 matrix b;
//	 int index = 0;
//	 b.rows = a.cows;
//	 b.cows = b.rows;
//	 b.values = a.values;
//	 if (a.values > 0)
//	 {
//		 for (int i = 0; i < a.cows; i++)
//		 {
//			 for (int j = 0; j < a.values; j++)
//			 {
//				 if (a.data[j].col == i)//0번째 열을 먼저 검색하기 위함
//				 {
//					 b.data[index].row = a.data[j].col;
//					 b.data[index].col = a.data[j].row;
//					 b.data[index].value = a.data[j].value;
//					 index++;
//				 }
//			 }
//		 }
//	 }
//	 return b;
//}
//
//int main()
//{
//	matrix m = { { {0,3,7},{1,0,9},{1,5,8},{3,0,6},{3,1,5},{4,5,1},{5,2,2} }, 6, 6, 7 };
//	matrix re;
//	re = trans(m);
//	matrix_print(re);
//	return 0;
//}