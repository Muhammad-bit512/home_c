
//~ Даны стороны треугольника a, b, c. Определить существует ли
//~ такой треугольник.


#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
	
	if(scanf("%d%d%d", &a, &b, &c) != 3) {
		printf("Error input");
		return 1;
	}
	
	if((a < b + c) && (b < a + c) && (c < a + b)) {
		printf("YES");
	} else {
		printf("NO");
	}
	
	return 0;
}

