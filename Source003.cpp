#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>


int main(void)
{
	/*
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("b :%d\n", b);
	printf("c : %d\n", c);
	printf("da : %lf\n", da);
	printf("ch : %c\n", ch);
	

	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float 형 변수의 값: %.20f\n", ft);
	printf("double 형 변수의 값: %.20lf\n", db);
	

	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	strcpy(fruit, "banana");
	printf("딸기잼 : %s %s\n", fruit, "jam");
	

	int income = 0;
	double tax;
	const double tax_rate = 0.12;
	//tax_rate = 0.15;
	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);
	

	int a = 70, b = 80, c = 90;
	int d;

	d = a + b + c;
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", a, b, c);
	printf("총점 : %d", d);
	
	int age;
	double height;

	printf("나이와 키를 입력하세요 :나이(__) 키(___._)");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height);
	   

	char grade;
	char name[20];

	printf("학점 입력 :");
	scanf("%c", &grade);
	printf("이름 입력 :");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);
	*/

	char ch;
	printf("문자 입력 : ");
	scanf("%c", &ch);
	printf("%c문자의 아스키 코드 값은 %d입니다.", ch,ch);

	return 0;
}