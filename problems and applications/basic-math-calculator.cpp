#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int a,b,c;
	char ch;
	do
	{
		system("cls");
		printf("Enter the a,b values: ");
		scanf("%d,%d",&a,&b);
		printf("\n-------- MENU --------\n");
		printf("+ Addition\n");
		printf("- Substraction\n");
		printf("* Multiplication\n");
		printf("/ Division\n");
		printf("%% Remainder\n");
		printf("--- YOUR SELECTION ---  :  ");
		scanf(" %c",&ch);
		printf("\n");
		switch(ch){
			case '+':
				c=a+b;
				printf("Conclusion is %d + %d = %d",a,b,c);
				break;
			case '-':
				c=a-b;
				printf("Conclusion is %d - %d = %d",a,b,c);
				break;	
			case '*':
				c=a*b;
				printf("Conclusion is %d * %d = %d",a,b,c);
				break;	
			case '/':
				c=a/b;
				printf("Conclusion is %d / %d = %d",a,b,c);
				break;
			case '%':
				c=a%b;
				printf("Conclusion is %d %% %d = %d",a,b,c);
				break;	
			case 'q': exit(1);	
			    break;
		} 
		    printf("\n");
		    system ("pause");  
		    
		                    } while (1);
		return 0;
}
