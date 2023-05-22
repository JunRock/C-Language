//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 101
//
//typedef struct {
//	float coef;
//	int expon;
//	
//}ploynomial;
//
//ploynomial terms[MAX] = { {8,3},{7,1},{1,0},{10,3},{3,2},{1.0} };
//int avail = 6;
//
//char compare(int a, int b)
//{
//	if (a > b) return '>';
//	else if (a == b) return'=';
//	else return '<';
//}
//
//void attach(float coef,int expon)//새로운 다항식을 만듬
//{
//	if (avail > MAX)
//	{
//		fprintf(stderr, "항의 개수가 너무 많음\n");
//		exit(1);
//	}
//	terms[avail].coef = coef;
//	terms[avail].expon = expon;
//	avail++;
//}
//
//void poly_add(int As, int Ae, int Bs, int Be, int *Cs, int *Ce)
//{
//	float tempcoef;
//	*Cs = avail;
//	while (As <= Ae && Bs <= Be)
//	{
//		switch (compare(terms[As].expon,terms[Bs].expon))
//		{
//		case '>':
//		{
//			attach(terms[As].coef, terms[As].expon);
//			As++;
//			break;
//		}
//
//		case '=':
//		{
//			tempcoef = terms[As].coef + terms[Bs].coef;
//			if(tempcoef)
//			attach(tempcoef, terms[As].expon);
//			As++;
//			Bs++;
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
//	for (; As < Ae; As++)
//		attach(terms[As].coef, terms[As].expon);
//	for (; Bs < Be; Bs++)
//		attach(terms[Bs].coef, terms[Bs].expon);
//	*Ce = avail - 1;
//}
//
//void print_poly(int s,int e)
//{
//	for (int i = s; i < e; i++)
//		printf("%3.1lfx^%d + ", terms[i].coef, terms[i].expon);
//	printf("%3.1lfx^%d\n", terms[e].coef, terms[e].expon);
//}
//
//int main()
//{
//	int As = 0 ,Ae = 2, Bs = 3, Be = 5, Cs, Ce;
//	poly_add(As, Ae, Bs, Be, &Cs, &Ce);
//	print_poly(As, Ae);
//	print_poly(Bs, Be);
//	printf("-------------------------------------------------------\n");
//	print_poly(Cs, Ce);
//	return 0;
//}