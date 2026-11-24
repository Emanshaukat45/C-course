#include<stdio.h>
#include<math.h>
int main()
{
	double a = 1;
	double b = 5;
	double c = 6;
	double discriminant = b * b - 4 * a * c;
	
	double root1 = (-b + sqrt(discriminant)) / (2 * a);
	double root2 = (-b - sqrt(discriminant)) / (2 * a);
	
	printf("root 1 : %1f\n",root1);
	printf("root 2 : %1f\n",root2);
	
	return 0;
	
	
	
	
	
}
