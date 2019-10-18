#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int);

int main()
{
	int res;
	res = sum(100);
	printf("%d", res);

	return 0;
}

int sum(int n)
{
	int res;
	res = n + (n - 1);
	if (n == 1) return n;
	return n + sum(n - 1);
}