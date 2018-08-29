#include <stdio.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int a, b;
	printf("2 integers:\n");
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
}
