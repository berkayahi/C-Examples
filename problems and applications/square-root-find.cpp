/** C program to find square root of a number **/

#include <stdio.h>
#include <math.h>

int main()
{
    float num, root;

    /* Input a number from user */
    printf("Enter any number to find square root: ");
    scanf("%f", &num);

    /* Calculate square root of num */
    root = sqrt(num);

    /* Print the resultant value */
    printf("Square root of %.2f = %.7f", num, root);

    return 0;
}
