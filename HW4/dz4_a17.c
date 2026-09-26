
//~ Ввести номер месяца и вывести название времени года.


#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	if(scanf("%d", &i) != 1) {
		printf("Error input");
		return 1;
	}
	
	if(i == 12 || i == 1 || i == 2)
		printf("winter");
	else if(i >= 3 && i <= 5)
		printf("spring");
	else if(i >= 6 && i <= 8)
		printf("summer");
	else if(i >= 9 && i <= 11)
		printf("autumn");
		
	return 0;
}


