#include<stdio.h>
int main()
{
	double celsius = 37.0;
	double fahrenheit = (celsius * 9 / 5) + 32;
	
	printf("%.1f°C is equal to %.1f°F\n",celsius, fahrenheit);
	
	double fahrenheit2 = 98.6;
    double celsius2 = (fahrenheit2 - 32) * 5 / 9;

    printf("%.1f°F is equal to %.2f°C\n", fahrenheit2, celsius2);

    return 0;
}

