#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
/*
void print_ary(int* pa);

int main()
{
	int num =0;
	int i = 0;
//	printf("배열 요소의 숫자:");
//	scanf_s("%d", &num,sizeof(num));
//	printf("%d", num);
//	int* p = &num;

	int ary[] = {10,20,30,40,50};
/*
	for (i = 0; i < num; i++);
	{
		double j = 0;
		printf("%d 번째 배열을 입력하세요: ", i);
		scanf_s("%lf", &j,sizeof(j));
		ary[i] = j;
	}
	
	print_ary(ary);
	
	return 0;
}
void print_ary(int* pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);
	}
}
*/
/*
void print_ary(int* pa, int size);

int main()
{
	int ary1[5] = { 10,20,30,40,50 };
	int ary2[7] = { 10,30,50,70,90,110,130 };
	
	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}
*/

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main()
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최대값 : %.1lf\n", max);


	return 0;
}

void input_ary(double* pa, int size)
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}
	return max;

}