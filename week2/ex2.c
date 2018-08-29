#include <stdio.h>
#include <string.h>

int main()  {
	char st[100005];
	printf("I'm waiting for your string:\n");
	scanf("%s", &st);
	for (int i = (int)strlen(st) - 1; i >= 0; i--) {
		printf("%c", st[i]);
	}
	printf("\n");
	return 0;
}
