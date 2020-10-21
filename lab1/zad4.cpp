#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	int z_int;
	short int z_short_int;
	long int z_long_int;
	long long int z_long_long_int;
	char z_char;
	float z_float;
	double z_double;
	long double z_long_double;

	printf("Rozmiar int: %lu\n", sizeof(int));
	printf("Rozmiar short int: %lu\n", sizeof(z_short_int));
	printf("Rozmiar long int: %lu\n", sizeof(z_long_int));
	printf("Rozmiar long long int: %lu\n", sizeof(z_long_long_int));
	printf("Rozmiar char: %lu\n", sizeof(z_char));
	printf("Rozmiar float: %lu\n", sizeof(z_float));
	printf("Rozmiar double: %lu\n", sizeof(z_double));
	printf("Rozmiar long double: %lu\n", sizeof(z_long_double));
	
	printf("Maksymalna wartosc int: %d\n", INT_MAX);
	printf("Maksymalna wartosc unsigned int: %u\n", UINT_MAX);
	printf("Maksymalna wartosc float: %f\n", FLT_MAX);
	printf("Maksymalna wartosc double: %f\n", DBL_MAX);

	return 0;
}
