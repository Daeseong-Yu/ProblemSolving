#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
	int num;
	int odd = 0, oddSum = 0, even = 0, evenSum = 0;

	scanf_s("%d", &num);
	if (num % 2 != 0) {
		for (odd = 1; odd < num; odd += 2) {
			oddSum += odd;
		}
		printf("The number %d is 홀수, 이하의 합은 %d", num, oddSum);
	}
	else {
		for (even = 0; even <= num; even += 2) {
			evenSum += even;
		}
		printf("The number %d is 짝수, 이하합은 %d", num, evenSum);
	}

	return 0;
}