#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, a, b;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &a);
//	printf("%d\n", a);

	i = 2;
	b = 1;
	while (i <= a)
	{
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
			{
				break;
			}				
		}
		if (j == i)
		{
			printf("%4d", i);
			b = b++;
		}
		if (b % 6 == 0)
		{
			printf("\n");
			b = 1;
		}
		i = i++;
	}

	return 0;
}