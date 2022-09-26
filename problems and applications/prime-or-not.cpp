#include <stdio.h>
int main()
{
	int prime,i,num;
	printf("Enter a number to check is prime or not ");
	scanf("%d",&num);
	i=2;
	while (i<=num){
		if (num==i && num%i==0) {
		printf("%d is prime.",num);}
		else if(num%i == 0) {
			printf("%d is not prime.",num);
			break;
		}
		i++;
	}
	        if (num==1) {printf("1 is not prime number.");}
	return 0;
}
