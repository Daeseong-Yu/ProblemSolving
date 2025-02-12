#include <stdio.h>
#include <string.h>

int solution(char numStr[]) {
	int sum = 0;
	int length = strlen(numStr);
	for (int i = 0; i < length; i++) {
		sum += numStr[i] - '0'; //aski
	}
	return sum;
}
