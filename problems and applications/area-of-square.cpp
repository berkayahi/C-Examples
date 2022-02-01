#include <stdio.h>
#include <math.h>
int main()
{
	float area,a,circumference;
	printf("Enter the value of one side of the square: ");
	scanf("%f",&a);
	if (a>0) 
	{
		area = pow(a,2);
		circumference = 4*a;
		printf("Area is : %.2f\n",area);
		printf("Circumference is: %.2f",circumference);
	}
	else printf("You input a wrong side value.");
	return 0;
}
