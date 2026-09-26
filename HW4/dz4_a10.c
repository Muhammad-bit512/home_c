
//~ Ввести пять чисел и найти  наименьшее из них.

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	int min = a;
	
	if(b < min)
		min = b;
	if(c < min)
		min = c;
	if(d < min)
		min = d;
	if(e < min)
		min = e;
	
	printf("%d\n", min);
	return 0;
}

