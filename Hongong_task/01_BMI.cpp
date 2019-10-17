#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
		double kg, cm, bmi;
		printf("몸무게(kg)와 키(cm)를 입력하세요.\n");
		scanf("%lf%lf", &kg, &cm);
		printf("몸무게(kg)와 키(cm) 입력: %.1lf %.1lf\n", kg, cm);
		bmi = (kg) / ((cm / 100.0)* (cm / 100.0));
		printf("BMI: %.1lf %s\n", bmi,((20.0 <= bmi) && (bmi< 25.0)) ? "표준입니다." : "체중관리가 필요합니다.");
		
	return 0;
}