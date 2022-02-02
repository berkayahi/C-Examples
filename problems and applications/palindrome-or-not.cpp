// q16
#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,m,newn=0,nd;
	printf("Enter n value:");
	scanf("%d",&n);
	m=n;
	nd=(int) log10(n)+1; // this gives the number of digits in n number
	for(i=nd-1;i>=0;i--)
	{
		newn+=(n%10)*pow(10,i);
		n/=10;
	}
	if(m==newn) printf("%d is a palindrom number",m);
	else printf("%d is not a palindrom number",m);
	return 0;
} 
