#include<stdio.h>

int main()
{
	int data[] = { 1,3,5,4,9,7 };
	printf("%d", search(data, 6, 9));
}

int search(int data[], int n, int target)
{
	if (n <= 0)
		return -1;
	else if (target == data[n - 1])
		return n - 1;
	else
		return search(data, n-1, target);
}