#include <stdio.h>

int main(void)
{
	
	
	int a, b, c;
	
	if (scanf("%d%d%d", &a, &b, &c) != 3) {
		printf("Error input");
		return 1;
	}
	
	int res = a + b + c;
	printf("%d+%d+%d=%d", a, b, c, res);
	
	
	return 0;
}

