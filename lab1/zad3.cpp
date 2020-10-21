#include <stdio.h>

int main(){
	int a = 5, b = 7;
	float c = 4.3, d = 18.2;

	// Wypisanie wartosci zmiennych
	printf("a = %d\nb = %d\nc = %.1f\nd = %.1f\n", a, b, c, d);

	// Dzielenie liczb calkowiych zwraca czesc calkowita
	printf("Dzielenie liczb calkowitych a i b: %d\n", (a/b));

	// Dzielenie kiedy conajmniej jedna liczba jest zmienno przecinkowa zwraca
	// liczbe zmiennoprzecinkowa.
	printf("Dzielenie liczb zmiennoprzecinkowych c i d: %.3f\n", (c/d));

	// Reszta z dzielenia liczb a i b z uzyciem %
	printf("Reszta z dzielenia a %% b: %d\n", a%b);
	
	// przypisanie wartosc b do a, nastepnie inkrementacja b
	printf("Przypisanie wartosci b do a, nastepnie inkrementacja b\n");
	printf("Przed przypisaniem: a = %d, b = %d\n", a, b);
	a = b++;
	printf("Po przypisaniu: a = %d, b = %d\n", a, b);
	
	// inkrementacja d przed przypisaniem do c
	printf("Inkrementacja zmiennej d, nastepnie przypisanie jej do c\n");
	printf("Przed przypisaniem: c = %.1f, d = %.1f\n", c, d);
	c = ++d;
	printf("Po przypisaniu: c = %.1f, d = %.1f\n", c, d);

	// a += a dziala jak a = a + a
	printf("Operacja a += a: %d\n", a+=a);
	
	return 0;
}
