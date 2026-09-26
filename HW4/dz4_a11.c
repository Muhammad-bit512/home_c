
//~ Напечатать сумму максимума и минимума.

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d, e;
	if(scanf("%d%d%d%d%d", &a, &b, &c, &d, &e) != 5) {
		printf("Error input");
		return 1;
	}
	
	int max = a;
	
	if(b > max)
		max = b;
	if(c > max)
		max = c;
	if(d > max)
		max = d;
	if(e > max)
		max = e;
	
	int min = a;
	
	if(b < min)
		min = b;
	if(c < min)
		min = c;
	if(d < min)
		min = d;
	if(e < min)
		min = e;
	
	int res = min + max;
	printf("%d\n", res);
	
	
	return 0;
}

