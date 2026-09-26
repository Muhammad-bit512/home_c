
//~ Ввести три числа и найти наибольшее из них

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	int max = a; 
	
	if(b > max) 
		max = b;
	
	if(c > max) 
		max = c;

	printf("%d", max);
	return 0;
}

