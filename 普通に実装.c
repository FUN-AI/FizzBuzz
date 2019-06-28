#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	if (x % 3 == 0)
		printf("Fizz");
	if (x % 5 == 0)
		printf("Buzz");
	if (x % 5 != 0 && x % 3 != 0)
		printf("%d", x);
	printf("\n");

	return 0;
}
