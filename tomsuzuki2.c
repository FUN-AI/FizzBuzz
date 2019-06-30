#include <stdio.h>
#include <string.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	char i[256];
	char c[256] = "FizzBuzz";
	snprintf(i, 12, "%d", x);
	strcat(c, i);

	printf("%.*s", strlen(i) * (x % 3 != 0 && x % 5 != 0) + (x % 3 == 0) * 4 + (x % 5 == 0) * 4, c + 8 - (x % 3 == 0) * 8 - (x % 5 == 0) * 4 + (x % 15 == 0) * 4);

	return 0;
}
