/**
 * C program to find power of a number using recursion
 */

#include <stdio.h>


/* Power function declaration */
double pow(double base, int expo);


int main()
{
    double base, power;
    int expo;

    /* Input base and exponent from user */
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);

    // Call pow function
    power = pow(base, expo);

    printf("%.2lf ^ %d = %f", base, expo, power);

    return 0;
}

double pow(double base, int expo)
{
    if(expo == 0)
        return 1;
    else if(expo > 0)
        return base * pow(base, --expo);
    else
        return 1 / pow(base, -expo);
}
