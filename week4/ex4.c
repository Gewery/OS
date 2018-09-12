#include <stdio.h>

void read(char *st) {
	gets(st); // Let's just read all the string until '\n'
}

int main() {
	char st[10];
	while (1) {
		printf("$ ");
		read(st);
		system(st);
	}
}
