#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++, printf("\n")) {
		for (int j = 0 ; j < N - i - 1; j++)
			printf(" ");
		for (int j = 0; j < 1 + (i << 1); j++)
			printf("*");
		for (int j = 0 ; j < N - i - 1; j++)
			printf(" ");
	}
	return 0;
}
