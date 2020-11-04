#include <stdio.h>
#include <cmath>

int silnia(int number){
	if (number < 2)
		return 1;
	return number * silnia(number - 1);
}
double potega(float podstawa, int wykladnik) {
	long double result = 1;
	for (wykladnik; wykladnik > 0; wykladnik--) {
		result *= podstawa;
	}
	return result;
}

int main() {
	float x;
	int n;

	printf("Podaj liczbę zmiennoprzecinkową: ");
	scanf("%f", &x);
	printf("Podaj liczbę całkowitoliczbową: ");
	scanf("%d", &n);
	double result = sin(x);
	printf("Sinus z liczby x wynosi: %f\n", result);

	float taylor_result = 0;
	int k;
	for (k = 0; k <= n; k++){
		taylor_result += (potega(-1, k)/silnia(2*k + 1)) * potega(x, 2*k + 1);
	}
	printf("Wzorem taylora = %f", taylor_result);
	return 0;
}
