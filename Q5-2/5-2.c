#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int digit, n, sum = 0;
	scanf("%d", &n);
	do {
		digit = n % 10;
		sum += digit;
		n /= 10;
	} while (n > 0);

	printf("%d\n", sum);

	return 0;
}