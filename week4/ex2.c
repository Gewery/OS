#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		fork();
		sleep(5);
	}
	return 0;
}

// Result: fork() made a 3 copies of 1st process, 2 copies of the 2nd(copied) process and 1 copy of the 3rd(copied) process
// processes created recursevly in this way.
// In total created 8 processes was created
