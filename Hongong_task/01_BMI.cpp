#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
		double kg, cm, bmi;
		printf("������(kg)�� Ű(cm)�� �Է��ϼ���.\n");
		scanf("%lf%lf", &kg, &cm);
		printf("������(kg)�� Ű(cm) �Է�: %.1lf %.1lf\n", kg, cm);
		bmi = (kg) / ((cm / 100.0)* (cm / 100.0));
		printf("BMI: %.1lf %s\n", bmi,((20.0 <= bmi) && (bmi< 25.0)) ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");
		
	return 0;
}