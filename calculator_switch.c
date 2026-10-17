/*
 * Program: Simple Calculator
 * Description: Performs basic arithmetic operations
 *              using a switch statement.
 */

#include <stdio.h>

int main()
{
    double num1, num2;
    char operator;

    // Input the operator and two numbers
    printf("Enter an operator (+, -, *, /): ");

    if (scanf(" %c", &operator) != 1)
    {
        printf("Invalid operator input.\n");
        return 1;
    }

    printf("Enter two numbers: ");

    if (scanf("%lf %lf", &num1, &num2) != 2) 
    {
        printf("Invalid number input.\n");
        return 1;
    }

    // Perform the selected operation
    switch (operator)
    {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
            {
                printf("Result: %.2f\n", num1 / num2);
            } 
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
