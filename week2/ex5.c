#include <stdio.h>

void type1(int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++, printf(" "));
		for (int j = 0; j < 1 + (i << 1); j++, printf("*"));
		for (int j = 0; j < N - i - 1; j++, printf(" "));
		printf("\n");
	}
}

void type2(int N) {
	for (int i = 0; i < N; i++, printf("\n"))
		for (int j = 0; j <= i; j++, printf("*"));
}

void type3(int N) {
	for (int i = 1; i <= (N + 1) / 2; i++, printf("\n"))
		for (int j = 0; j < i; j++, printf("*"));

	for (int i = N / 2; i >= 1; i--, printf("\n"))
		for (int j = 0; j < i; j++, printf("*"));
}

void type4(int N) {
	for (int i = 0; i < N; i++, printf("\n"))
		for (int j = 0; j < N; j++, printf("*"));
}

int main() {
	int N, type;
	printf("N: ");
	scanf("%d", &N);
	printf("What type of figure would you like to see(1 - 4)? ");
	scanf("%d", &type);
	if (type == 1)
		type1(N);
	else if (type == 2)
		type2(N);
	else if (type == 3)
		type3(N);
	else if (type == 4)
		type4(N);
	else printf("Please, next time write an integer between 1 and 4\n");
}
