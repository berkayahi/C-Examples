#include <stdio.h>
#include <math.h> /* Used for sqrt() */

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;
    W
    printf("Enter the values a of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &a);
    printf("Enter the values a of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &b);
    printf("Enter the values a of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &c);
    
    /* Find discriminant of the equation */
    discriminant = (b * b) - (4 * a * c);
    
   
    /* Find the nature of discriminant */
    if(discriminant > 0)
    {
    	printf("The discriminant is greater than 0, so program will process the first case\n\n");
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(discriminant == 0)
    {
    	    	printf("The discriminant is equal to 0, so program will process the second case");
        root1 = root2 = -b / (2 * a);

        printf("\n\nTwo equal and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(discriminant < 0)
    {
    	printf("The discriminant is smaller than 0, so program will process the third case");
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);

        printf("\n\nTwo distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                root1, imaginary, root2, imaginary);
    }

    return 0;
}
