#include <stdio.h>

int main() {
	FILE *file;
	char st[6];
	file = fopen("ex2.txt", "w");
	setvbuf(file, st, _IOLBF, 5);
	fputs("H", file);
	sleep(1);
	fputs("e", file);
	sleep(1);
	fputs("l", file);
	sleep(1);
	fputs("l", file);
	sleep(1);
	fputs("o", file);
	sleep(1); // why?
	printf("%d", st);
	fclose(file);
	return 0;
}
