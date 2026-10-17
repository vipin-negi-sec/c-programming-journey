/*
 * Program: Largest of Three Numbers
 * Description: Takes three numbers as input and finds
 *              the largest among them.
 */

#include <stdio.h>
int main() 
{
    double a, b, c;
    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    // Find the largest number
    if (a >= b && a >= c) 
    {
        printf("Largest number: %.2f\n", a);
    } 
    else if (b >= a && b >= c) 
    {
        printf("Largest number: %.2f\n", b);
    } 
    else 
    {
        printf("Largest number: %.2f\n", c);
    }

    return 0;
}
