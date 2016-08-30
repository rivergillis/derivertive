#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int num1, num2, num3;
	int pow1, pow2, pow3;
	char add1, add2;

	// get the input string until it is correct
	while ((add1 != '-' &&  add1 != '+') || (add2 != '-' && add2 != '+')) {
		printf("Enter a trinomial of the form ax^A+bx^B+cx^C (you may also use '-')\n");
		scanf("%dx^%d %c %dx^%d %c %dx^%d", &num1, &pow1, &add1, &num2, &pow2, &add2, &num3, &pow3);
		printf("num1: %d; pow1 %d; add1 %c; num2 %d; pow2 %d; add2 %c; num3 %d pow3 %d\n", num1, pow1, add1, num2, pow2, add2, num3, pow3);
	}
	/*scanf("%2d:%2d", &hour, &min);

	if (hour >= 12) {
		if (min != 0) {
			hour -= 12;
		}
		pm = true;
	}

	printf("Equivalent 12-hour time: %2d:%02d", hour, min);
	if (pm == true) {
		printf(" PM\n");
	} else {
		printf(" AM\n");
	}*/
	return 0;
}
