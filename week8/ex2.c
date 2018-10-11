#include <stdio.h>
//#include <memory.h>

int main() {
	for (int i = 0; i < 10; i++) {
		memset(malloc((1 << 21) * 5), 0, (1 << 21) * 5);
		sleep(1);
	}
	return 0;
}
