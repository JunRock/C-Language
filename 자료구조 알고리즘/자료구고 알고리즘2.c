/*
	작성일: 2022.03.22
	작성자: 이 준 석
	프로그램명:	사칙연산에 따른 실행시간 비교
*/
#include<stdio.h>//printf(),scanf()함수를 사용하기 위하여 선언한 헤더파일
#include<time.h>//clock()함수를 사용하기 위하여 선언한 헤더파일

int main()
{
	char ch;//사용자가 연산을 입력할때 사용하는 변수
	int x = 30;//연산에 들어갈 값을 저장한 변수 선언
	int y = 20;//연산에 들어갈 값을 저장한 변수 선언
	unsigned int i,n, result = 0;//n은 사용자가 반복횟수를 입력하는 변수, result는 연산한 값을 저장하는 변수
	clock_t start, stop; //시간을 측정하기 위하여 clock_t타입의 시작과 끝을 뜻하는 변수선언
	double dur;//걸린시간을 저장하는 변수
	printf("연산을 선택하세요(+,-,*,/): ");//사용자에게 연산기호를 고르라는 문장 출력
	scanf("%c", &ch);//사용자가 연산을 선택하는 문장
	printf("반복횟수를 입력하시오:");//사용자에게 반복횟수를 정하라는 문장을 출력
	scanf("%u", &n);//사용자가 반복횟수를 정하는 문장

	switch (ch)//ch에 의해 조건을 실행하는 switch-case문 선언
	{
	case '+'://사용자가 '+'연산을 골랐을 때 실행
	{
		start = clock();//시간측정 시작
		for (i = 1; i <= n; i++)//사용자가 정한 반복횟수만큼 반복문 실행
		{
			result = x + y;//result변수에 x+y값을 저장
		}
		stop = clock();//시간측정 종료
		dur = stop - start;//종료한 시간에서 시작한 시간을 빼서 걸린시간 측정
		printf("걸린시간: %lf", dur / 1000);//걸린시간을 1000으로 나누어서 밀리초 단위로 출력
		break;//switch문 탈출
	}

	case '-'://사용자가 '-'연산을 골랐을 때 실행
	{
		start = clock();//시간측정 시작
		for (i = 1; i <= n; i++)//사용자가 정한 반복횟수만큼 반복문 실행
		{
			result = x - y;//result변수에 x-y값을 저장
		}
		stop = clock();//시간측정 종료
		dur = stop - start;//종료한 시간에서 시작한 시간을 빼서 걸린시간 측정
		printf("걸린시간: %lf", dur / 1000);//걸린시간을 1000으로 나누어서 밀리초 단위로 출력
		break;//switch문 탈출
	}

	case '*'://사용자가 '*'연산을 골랐을 때 실행
	{
		start = clock();//시간측정 시작
		for (i = 1; i <= n; i++)//사용자가 정한 반복횟수만큼 반복문 실행
		{
			result = x * y;//result변수에 x*y값을 저장
		}
		stop = clock();//시간측정 종료
		dur = stop - start;//종료한 시간에서 시작한 시간을 빼서 걸린시간 측정
		printf("걸린시간: %lf", dur / 1000);//걸린시간을 1000으로 나누어서 밀리초 단위로 출력
		break;//switch문 탈출
	}
	case '/'://사용자가 '/'연산을 골랐을 때 실행
	{
		start = clock();//시간측정 시작
		for (i = 1; i <= n; i++)//사용자가 정한 반복횟수만큼 반복문 실행
		{
			result = x / y;//result변수에 x/y값을 저장
		}
		stop = clock();//시간측정 종료
		dur = stop - start;//종료한 시간에서 시작한 시간을 빼서 걸린시간 측정
		printf("걸린시간: %lf", dur / 1000);//걸린시간을 1000으로 나누어서 밀리초 단위로 출력
		break;//switch문 탈출
	}
	}
	return 0;//프로그램 종료
}