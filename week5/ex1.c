#include <stdio.h>
#include <pthread.h>

int N = 10;

void *func(void *n) {
	printf("thread number %d\n", n);
	pthread_exit(NULL);
}

void parallel() {
	pthread_t threads[100505];
	for (int i = 0; i < N; i++)
		pthread_create(&threads[i], NULL, func, (void *)i);
	for (int i = 0; i < N; i++)
		pthread_join(threads[i], NULL);
}

void sequence() {
	pthread_t threads[100505];
	for (int i = 0; i < N; i++) {
		pthread_create(&threads[i], NULL, func, (void *)i);
		pthread_join(threads[i], NULL);
	}
}

int main() {
	pthread_t threads[100505];
	printf("Parallel:\n");
	parallel();
	printf("\n\nSequence:\n");
	sequence();
	return 0;
}
