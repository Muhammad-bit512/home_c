
//~ Ввести три числа и определить, верно ли, что они вводились
//~ в порядке возрастания.

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
	
	if(scanf("%d%d%d", &a, &b, &c) != 3) {
		printf("Error input");
		return 1;
	}
	
	if(a < b && b < c)
		printf("YES");
	else
		printf("NO");
	return 0;
}

