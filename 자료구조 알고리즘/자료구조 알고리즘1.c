/*
	작성일: 2022.03.22
	작성자: 이 준 석
	프로그램명:	알고리즘에 따른 실행시간 비교
*/
#include<stdio.h> //printf(),scanf()함수를 사용하기 위하여 선언한 헤더파일
#include<time.h>//clock()함수를 사용하기 위하여 선언한 헤더파일
int main()
{
	int k, n, sum = 0;//k는 반복횟수를 입력하기 위하여 선언한 변수, n은 어느 알고리즘을 사용할 것인지 선택하기 위한 변수, sum은 값을 저장하는 변수
	double dur; //걸린시간을 저장하는 변수
	clock_t start, stop; //시간을 측정하기 위하여 clock_t타입의 시작과 끝을 뜻하는 변수선언
	printf("알고리즘을 선택하시오(1,2,3) :"); //사용자에게 알고리즘선택을 하라는 문구를 출력
	scanf("%d", &n);//사용자가 알고리즘을 선택
	printf("반복횟수를 입력하시오:");//사용자가 반복횟수를 정하라는 문구 출력
	scanf("%d", &k);//사용자가 반복횟수 입력
	switch (n) //사용자가 누른 알고리즘 번호에 맞는 조건을 실행하기 위한 switch문
	{
	case 1://사용자가 1번을 눌렀을 경우
	{
		start = clock();//시간측정 시작
		sum = k * k;//k*k 연산실행
		stop = clock();//시간측정 종료
		dur = stop - start;//종료한 시간에서 시작한 시간을 빼서 걸린시간 측정
		printf("걸린시간: %lf", dur / 1000); //걸린시간을 1000으로 나누어서 밀리 초 단위로 출력
		break;//switch문 탈출
	}

	case 2://사용자가 2번을 눌렀을 경우
	{
		start = clock();//시간측정 시작
		for (int i = 0; i < k; i++) //k만큼 반복문 실행
			sum += k;//sum변수에 k값을 k번 더함
		stop = clock();//시간측정 종료
		dur = stop - start;//종료한 시간에서 시작한 시간을 빼서 걸린시간 측정
		printf("걸린시간: %lf", dur / 1000);//걸린시간을 1000으로 나누어서 밀리 초 단위로 출력
		break;//switch문 탈출
	}

	case 3://사용자가 2번을 눌렀을 경우
	{
		start = clock();//시간측정 시작
		for (int i = 1; i < k; i++)//k만큼 반복문 실행
			for (int j = 1; j < k; j++)//k만큼 2중 반복문 실행
				sum += 1;
		stop = clock();//시간측정 종료
		dur = stop - start;//종료한 시간에서 시작한 시간을 빼서 걸린시간 측정
		printf("걸린시간: %lf", dur / 1000);//걸린시간을 1000으로 나누어서 밀리 초 단위로 출력
		break;//switch문 탈출
	}
	}
	return 0;//프로그램 종료
}