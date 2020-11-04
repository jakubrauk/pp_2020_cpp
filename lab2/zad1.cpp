#include <stdio.h>

bool isDigit(char number){
	if (number >= 48 && number <= 57)
		return true;
	else
		return false;
}

bool isLowerCase(char letter){
	if (letter >= 97 && letter <= 122)
		return true;
	else
		return false;
}

bool isUpperCase(char letter){
	if (letter >= 65 && letter <= 90)
		return true;
	else
		return false;
}

int main(){
	char a;
	printf("Wprowadź znak: ");
	scanf("%s", &a);

	printf("Wprowadzony znak: %s\n", & a);

	if (isDigit(a))
		printf("Znak jest cyfrą\n");
	else if (isLowerCase(a))
		printf("Znak jest małą literą\n");
	else if (isUpperCase(a))
		printf("Znak jest dużą literą\n");
	else
		printf("Inny znak\n");

	// switch(a) {
	// 	case(isDigit(a)):
	// 		printf("Znak jest cyfrą\n");
	// 		break;
	// 	case(isLowerCase(a)):
	// 		printf("Znak jest małą literą\n");
	// 		break;
	// 	case(isUpperCase(a)):
	// 		printf("znak jest dużą literą\n");
	// 		break;
	// 	default:
	// 		printf("Inny znak.\n");
	// }

	return 0;
}