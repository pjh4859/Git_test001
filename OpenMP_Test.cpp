#include <stdio.h>
#include <time.h>
#include <omp.h>
int num_steps = 1000000000; /* 10억번 : 너무 많으면 조금 줄이시길... */

int main()
{
	clock_t start = clock(); // 시작 시간 저장
/*
	int i;
	omp_set_num_threads(4);         // for문을 병렬로 수행할 때 사용할 Thread 갯수
#pragma omp parallel for        // for문을 병렬로 수행하기 위한 directive
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

	clock_t end = clock(); // 코드가 끝난 시간 저장
	// 걸린 시간 출력
	// 단위 : 초(second)
	// CLOCKS_PER_SEC로 나눠줘야 초단위로 나옵니다.
	printf("Time : %lf\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}