#include <stdio.h>
#include <time.h>
#include <omp.h>
int num_steps = 1000000000; /* 10��� : �ʹ� ������ ���� ���̽ñ�... */

int main()
{
	clock_t start = clock(); // ���� �ð� ����
/*
	int i;
	omp_set_num_threads(4);         // for���� ���ķ� ������ �� ����� Thread ����
#pragma omp parallel for        // for���� ���ķ� �����ϱ� ���� directive
	for (i = 0; i < 8; i++)
		printf("%d Hello, World! Thread ID: %d\n",i,omp_get_thread_num());
	*/	
	int i;
	double x, step, sum = 0.0;
	step = 1.0 / (double)num_steps;
#pragma omp parallel for private(x) reduction(+:sum)
	for (i = 0; i < num_steps; i++) {
		x = (i + 0.5) * step;
		sum += 4.0 / (1.0 + x * x);
	}
	printf("PI = %.8f (sum = %.8f)\n", step * sum, sum);

	clock_t end = clock(); // �ڵ尡 ���� �ð� ����
	// �ɸ� �ð� ���
	// ���� : ��(second)
	// CLOCKS_PER_SEC�� ������� �ʴ����� ���ɴϴ�.
	printf("Time : %lf\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}