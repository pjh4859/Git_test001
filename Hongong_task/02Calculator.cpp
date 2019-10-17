#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a = 0, b = 0, res = 0;
	int tt=0;
	char c;
	printf("사칙연산을 입력하시오(* / + -)\n");
	scanf("%lf %c %lf", &a, &c, &b);

//	printf("%.1lf%.1lf\n", a, b);
//	printf("%c\n", c);
	
	if (c == '+')
	{
		tt = 1;
	}
	else if (c == '-')
	{
		tt = 2;
	}
	else if (c == '*')
	{
		tt = 3;
	}
	else if (c == '/')
	{
		tt = 4;
	}
	else
	{
		tt = 0;
	}


	switch (tt)
	{
	case 1:
		res = a + b;
		break;
	case 2:
		res = a - b;
		break;
	case 3:
		res = a * b;
		break;
	case 4:
		res = a / b;
		break;
	default:
		printf("제대로 된 값을 넣어주세요.\n");
		break;
	}
	printf("%d\n", tt);
	printf("%.1lf %c %.1lf = %.1lf\n", a, c, b, res);

	return 0;
}