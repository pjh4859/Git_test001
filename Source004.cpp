#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>


int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("%d,%d\n", a, b);
	printf("pre:%d\n", pre);
	printf("post:%d\n", post);

	return 0;
}