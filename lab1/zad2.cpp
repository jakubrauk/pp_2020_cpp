#include <stdio.h>

int main(){
	int masa, wzrost;
	// Wczytanie masy oraz wzrostu
	printf("Podaj swoja mase w kilogramach: ");
	scanf("%d", &masa);
	printf("Podaj swoj wzrost w centymetrach: ");
	scanf("%d", &wzrost);
	
	// Przeliczenie CM na M
	float wzrost_w_metrach = wzrost * 0.01;	

	// Obliczenie BMI
	float bmi = masa/(wzrost_w_metrach * wzrost_w_metrach) ;

	printf("Twoje BMI wynosi: %.2f\n", bmi); // Wyswietlenie bmi z 2 miejscami po przecinku
	return 0;
}
