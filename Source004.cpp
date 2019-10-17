#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>


int main(void)
{
/*	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("%d,%d\n", a, b);
	printf("pre:%d\n", pre);
	printf("post:%d\n", post);
	//

	int a = 20, b = 3;
	double res;

	res = ((double)a / (double)b);
	printf("a = %d,b = %d\n", a, b);
	printf("a/b의 결과:%.1lf\n", res);

	a = (int)res;
	printf("(int)%.1lf의결과:%d\n", res, a);
	//

	int a = 10;
	double b = 3.4;

	printf("int  size : %d\n", sizeof(a));
	printf("double  size : %d\n", sizeof(b));
	printf("정수형  size : %d\n", sizeof(10));
	printf("수식  size : %d\n", sizeof(1.5+3.4));
	printf("char  size : %d\n", sizeof(char));
	//
	
	int a = 10, b = 20;
	int res = 2;

	a += 20;
	res *= b + 10;

	printf("a=%d,b=%d\n", a, b);
	printf("res=%d\n", res);
	//

	int a = 10 , b = 21;
	int res;

	res = (++b, ++a);
	printf("a:%d,b:%d\n", a, b);
	printf("res:%d\n", res);
	//
	

	int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	printf("큰 값:%d\n", res);
	//

	int a = 10, b = 12;

	printf("a&b:%d\n", a & b);
	printf("a^b:%d\n", a ^ b);
	printf("a|b:%d\n", a | b);
	printf("~a:%d\n", ~a);
	printf("a<<1:%d\n", a <<1);
	printf("a>>2:%d\n", a >>2);
	//
	*/

	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res=%d\n",res);
	res = ++a * 3;
	printf("res=%d\n", res);
	res = a > b && a != 5;
	printf("res=%d\n", res);
	res = a % 3 == 0;
	printf("res=%d\n", res);



	return 0;
}