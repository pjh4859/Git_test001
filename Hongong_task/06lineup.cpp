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

	printf("�Ǽ��� 3�� �Է� :");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	
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
	for (int i = 0; i < 3; i++)    // ����� ������ŭ �ݺ�
	{
		for (int j = 0; j < 3 - 1; j++)   // ����� ���� - 1��ŭ �ݺ�
		{
			if (arr1[j] < arr1[j + 1])          // ���� ����� ���� ���� ����� ���� ���Ͽ�
			{                                 
				swap(&arr1[j], &arr1[j + 1]);
				
			}
		}
	}
	*pa = arr1[0];
	*pb = arr1[1];
	*pc = arr1[2];

}
	