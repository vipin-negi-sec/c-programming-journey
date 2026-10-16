/*
 * Program: Triangle Area Calculator
 * Description: Checks whether three sides form a valid triangle and calculates its area using Heron's formula.
 */

#include <stdio.h>
#include <math.h>

int main(void) 
{
    double a, b, c, s, area;
    // Input the three sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    // Check whether the sides form a valid triangle
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) 
    {
        printf("Invalid triangle\n");
    }
    else 
    {
        // Calculate the semi-perimeter
        s = (a + b + c) / 2.0;
        // Calculate area using Heron's formula
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        // Display the calculated area
        printf("Area = %.2f\n", area);
    }
    return 0;
}
