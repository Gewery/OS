#include <stdio.h>

void read(char *st) {
	gets(st);
}

int main() {
	char st[10];
	while (1) {
		printf("$ ");
		read(st);
		system(st);
	}
}
