#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	int N_int = INT_MAX;
	float N_float = FLT_MAX;
	double N_double = DBL_MAX;
	printf("int: %d\n", N_int);
	printf("float: %d\n", N_float);
	printf("double: %d\n", N_double);
}
