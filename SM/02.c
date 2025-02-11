#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char nStr[10];
	printf("input : \n");
	scanf_s("%s", nStr,(int)sizeof(10)); //참조:https://intshc.tistory.com/42
	int result = atoi(nStr);
	printf("The result is %d\n", result);
	return 0;
}
