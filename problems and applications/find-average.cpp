#include <stdio.h>

int main()
{
	int i, n;
	float sum=0;
	printf("How many students you have in your class? Input: ");
	scanf("%d",&n);
	float avg[n];
	for(i=0;i<n;i++)
	{
		printf("Grade of %d. student: ",i+1);
		scanf("%f",&avg[i]);
		sum=sum+avg[i];
	 } 
	 printf("The average of %d student is equal to %f",n, sum/n);
	 return 0;
}
