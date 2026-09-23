#include <stdio.h>

int main(int argc, char **argv)
{
	int s, d, e, x;
	scanf("%d", &x);
	
	s = x / 100;
	d = (x / 10) % 10;
	e = x % 10;
	
	int res = s * d * e;
	
	printf("%d", res);
	
	return 0;
}

