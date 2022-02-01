#include <stdio.h>

int main()

{
	float sp,cp,loss=0,profit=0,boughtamount,soldamount,left;
	printf("How much money you paid to buy the product: ");
	scanf("%f",&cp);
	printf("What amount you bought of that product: ");
	scanf("%f",&boughtamount);
	printf("\nYou paid %.3f TL to buy %.3f amount of product.",cp,boughtamount);
	printf("\nHow much money do you want to sell the product: ");
	scanf("%f",&sp);
	printf("What amount you sold of that product so far: ");
	scanf("%f",&soldamount);
	printf("\n");
	
	profit= (sp*soldamount) - (cp*boughtamount);
	left= boughtamount-soldamount;
	
    if (boughtamount>soldamount){
    if (profit>0) {printf("You're in profit, your profit is %.2f TL.\n",profit);
                   printf("If you sell your left %.f product you'll earn %.2f TL.\n",left,left*sp);
                   printf("After you sell your left %.f product, your profit is %.2f TL.",left,left*sp+profit);	}
	else if (profit==0) printf("You're in a head. No loss, no profit.");
	else if (profit<0) {printf("You're in loss, your loss is %.2f TL\n",-profit);
	                    printf("If you sell your left %.f product you'll earn %.2f TL.\n",left,left*sp);
						if (left*sp+profit>0) printf("Congrats! After the sellings your all products you are in profit. \nTotal profit will be %.2f TL if you keep selling the products for %.2f TL each.",left*sp+profit,sp);
						else if (left*sp+profit==0) printf("After the sellings your all products you are in a head. No loss, no profit.");
						else if (left*sp+profit<0) printf("Bad news! After the selling your all products you are still in loss. Loss is %.2f TL",left*sp+profit);	}	}
	else if (boughtamount==soldamount){
    if (profit>0) printf("You're in profit, your profit is %.2f TL and you sold your all products, congratulations!",profit);
	else if (profit==0) printf("You're in a head. No loss, no profit.");
	else if (profit<0) printf("You're in loss, your loss is %.2f TL, bad investment...",-profit);}
	else printf("\nERROR! ERROR! ERROR! \nIf you bought %.f product you cannot sell %.f product.\nIt is impossible, please correct it!",boughtamount,soldamount);
	printf("\n\n\n");
	return 0;
}
