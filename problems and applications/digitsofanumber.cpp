// digit of a number
#include <stdio.h>
int main()
{
	int num,a,k,reverse=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	k=num;
	// reverse
	while (num!=0){
		reverse = (reverse * 10) + (num%10);
		num/=10;
	}
	printf("\nYour number is %d",k);
	printf("\nThe reverse of your number is %d\n",reverse);
	// list the digits of number
	while (reverse!=0){
		a=reverse%10;
		printf("\nThe digits of your number is: %d",a);
		reverse/=10;
	}
	return 0;
}
