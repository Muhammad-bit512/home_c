
//~ Дано трехзначное число, напечатать макисмальную цифру

#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	if(scanf("%d", &num) != 1) {
		printf("Error input");
		return 1;
	}
	
	int units   = num % 10;       
	int tens    = (num / 10) % 10; 
	int hundreds = num / 100;
	
	int max = units;
	
	if(tens > max)
		max = tens;
	if(hundreds > max)
		max = hundreds;
	
	printf("%d", max);
	
	return 0;
}

