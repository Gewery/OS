#include <stdio.h>

int N = 50;

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void bubble_sort(int *pa) {
	for (int i = 0; i < N; i++) 
		for (int j = 0; j < N - 1; j++)
			if (*(pa + j) > *(pa + j + 1))
				swap(pa + j, pa + j + 1);
}

int main() {
	int Arr[100005];
	for (int i = 0; i < N; i++) {
		Arr[i] = ((i << 2) % 47) * 7 - i + 1;
		printf("%d ", Arr[i]);
	}

	printf("\n\n");
	bubble_sort(Arr);

	for (int i = 0; i < N; i++, printf("%d ", Arr[i - 1]));
}
