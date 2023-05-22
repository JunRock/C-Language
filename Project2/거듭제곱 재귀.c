//#include<stdio.h>
//
//double s(double x, int n)
//{
//	if (n == 0) return 1;
//	else if (n % 2 == 0)
//		return s(x*x, n / 2);
//	else
//		return x * s(x*x, (n - 1) / 2);
//}
//
//int main()
//{
//	printf("%lf", s(2.0, 5));
//}