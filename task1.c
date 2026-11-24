#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
	double radius = 5.0;
	double area = PI * radius * radius;
	double circumference = 2 * PI * radius;
	printf("radius: %1f\n" , radius);
	printf("area: %2f\n" , area);
	printf("circumference:%2f\n" , circumference);
	return 0;
	
}
