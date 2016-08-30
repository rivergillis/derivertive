#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int num1, num2, num3;
	int pow1, pow2, pow3;
	char add1, add2;
	int times_to_differentiate, i;

	// get the input string until it is correct
	while ((add1 != '-' &&  add1 != '+') || (add2 != '-' && add2 != '+')) {
		printf("Enter a trinomial of the form ax^A+bx^B+cx^C (you may also use '-')\ny=");
		scanf("%dx^%d %c %dx^%d %c %dx^%d", &num1, &pow1, &add1, &num2, &pow2, &add2, &num3, &pow3);
		printf("num1: %d; pow1 %d; add1 %c; num2 %d; pow2 %d; add2 %c; num3 %d pow3 %d\n", num1, pow1, add1, num2, pow2, add2, num3, pow3);
	}
	printf("Enter the amount of times to differentiate: ");
	scanf("%d", &times_to_differentiate);
	printf("Taking the derivative of y with respect to x %d time(s)...\n", times_to_differentiate);

	for (i = 0; i < times_to_differentiate; i++) {
		num1 *= pow1; pow1--;
		num2 *= pow2; pow2--;
		num3 *= pow3; pow3--;
	}

	printf("y(%d)=%dx^%d %c %dx^%d %c %dx^%d\n",times_to_differentiate, num1, pow1, add1, num2, pow2, add2, num3, pow3);
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
