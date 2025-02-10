#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a);

int main(void) {
	
	int num = 6;
	int Sum = solution(num);
	
	printf("n: %d, ÃÑÇÕ: %d", num, Sum);
	return 0;
}

int solution(int n) {
	int temp = 0;
	
	for (int i = 1; i <= 50; i++) {

		if (n % 2 == 0) {
			temp = temp + (n * n);
			n = n - 2; 
			
			if (n < 0) {
				break;
			}
		}
		else  
		{
			temp = temp + n;
			n = n - 2;

			if (n < 0) {
				break;
			}
		}
	}
	
	return temp;
}