#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[81];
	printf("���� �Է� : ");
	gets_s(str1);
	int i = 0;
	int n = 0;

	while (i < 81)
	{
	//	printf("%d\n", str1[i]);

		if ((str1[i] >= 'A') && (str1[i] <= 'Z'))
		{
			str1[i] = str1[i] + 'a'-'A';
			n = n++;
		}

		i = i++;
	}
	printf("�ٲ� ���� : %s\n", str1);
	printf("�ٲ� ���� �� : %d", n);
	return 0;
}