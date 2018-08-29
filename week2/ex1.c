#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	int N_int = INT_MAX;
	float N_float = FLT_MAX;
	double N_double = DBL_MAX;
	printf("int: %d %d\n", sizeof(N_int), N_int);
	printf("float: %d %d\n", sizeof(N_float), N_float);
	printf("double: %d %d\n", sizeof(N_double), N_double);
}
