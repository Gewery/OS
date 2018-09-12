#include <stdio.h>

int main() {
	int pid = fork();
	int n = 228;
	if (pid == 0)
		printf("Hello from child [%d - %d]\n", pid, n);
	else if (pid > 0)
		printf("Hello from parent [%d - %d]\n", pid, n);
	else
		printf("Error\n");

	//Result: processes ae started in pseudo-parallel way. So, we can see printed lines in totally unpredictable order
	//Also, process ids incremented by 1 for every process

	return 0;
}
