#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

int main() {
	struct rusage usage;
	for (int i = 0; i < 10; i++) {
		memset(malloc((1 << 21) * 5), 0, (1 << 21) * 5);
		getrusage(RUSAGE_SELF, &usage);
		printf("Maximum resident set size:%ld\n", usage.ru_maxrss);
		printf("Integral shared memory size:%ld\n", usage.ru_ixrss);
		printf("Integral unshared data size:%ld\n", usage.ru_idrss);
		printf("Integral unshared stack size:%ld\n", usage.ru_isrss);
		printf("Page reclaims (soft page faults):%ld\n", usage.ru_minflt);
  		printf("Page faults (hard page faults):%ld\n", usage.ru_majflt);
		printf("Swaps:%ld\n", usage.ru_nswap);
		printf("And so on...\n\n");
		sleep(1);
	}
	return 0;
}
