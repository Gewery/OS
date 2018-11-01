#include <sys/stat.h>
#include <sys/mman.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
	int file = open("ex1.txt", O_RDWR);
	struct stat b;
	fstat(file, &b);
	void* mem = mmap(0, b.st_size, PROT_WRITE, MAP_SHARED, file, 0);
	close(file);
	sprintf((char*)mem, "%s\n", "This is a nice day");
	munmap(mem, b.st_size);

	return 0;
}
