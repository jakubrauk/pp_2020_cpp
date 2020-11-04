#include <stdio.h>


int main() {
	int number = 0;

	do {
		printf("Podaj liczbę: ");
		scanf("%d", & number);
	} while(number > 10000 || number < 10);

	int i;
	for(i = 0; i*i <= number; i++){
		if (i*i == number)
			printf("Liczba ma pierwiastek całkowity równy: %d\n", i);
	}

	return 0;
}