#include <stdio.h>

int main(int argc, char **argv)
{
	float x1, y1, x2, y2;
	
	if(scanf("%f%f%f%f", &x1, &y1, &x2, &y2) != 4) {
		printf("Error input");
		return 1;
	}
	
	
	float k = (y2 - y1) / (x2 - x1);
	float b = y1 - k * x1;
	
	printf("%.2f %.2f\n", k, b);
	
	return 0;
}
