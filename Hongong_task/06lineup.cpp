#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);


int main()
{
	/*
	int a=10, b=20, c=30;
	int* p, * pp, * ppp;
	p = &a, pp = &b, ppp = &c;
	int arr[3] = { *p,*pp,*ppp };
	printf("%d %d %d\n", arr[0],arr[1],arr[2]);
	*/
	double max, mid, min;

	printf("실수값 3개 입력 :");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	
	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* pa, double* pb, double* pc)
{
	double arr1[3] = { *pa,*pb,*pc };
	 //printf("%lf %lf %lf\n", arr1[0], arr1[1], arr1[2]);
	double temp=0;
	int i=0,j=0;
	for (int i = 0; i < 3; i++)    // 요소의 개수만큼 반복
	{
		for (int j = 0; j < 3 - 1; j++)   // 요소의 개수 - 1만큼 반복
		{
			if (arr1[j] < arr1[j + 1])          // 현재 요소의 값과 다음 요소의 값을 비교하여
			{                                 
				swap(&arr1[j], &arr1[j + 1]);
				
			}
		}
	}
	*pa = arr1[0];
	*pb = arr1[1];
	*pc = arr1[2];

}
	