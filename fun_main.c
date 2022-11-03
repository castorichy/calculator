#include "main.h"

/**
 * calc - calculates oparations
 * @num_1: first number
 * @operator: operator to be used
 * @num_2: second number
 *
 * Return: results
*/

float calc(int num_1, char operator, int num_2)
{
    float res;
    if (!operator)
        return (EXIT_FAILURE);

    switch (operator)
    {
    case '+':
        res = num_1 + num_2;
        break;
    case '-':
        res = num_1 - num_2;
        break;
    case 'x':
        res = num_1 * num_2;
        break;
    case '/':
        res = num_1 / (float)num_2;
        break;
    
    default:
        printf("invalid operator.");
        break;
    }

    return (res);
}

/**
 * display - desplays the result
 * @results: results after calculations
 * @operator: operator used in calculations
 * 
 * Return: void
*/

void display(float results, char operator)
{
    switch (operator)
    {
    case '+':
        printf("Sum = %.2f", results);
        break;
    case '-':
        printf("Subtraction = %.2f", results);
        break;
    case 'x':
        printf("Product = %.2f", results);
        break;
    case '/':
        printf("Division = %.2f", results);
        break;
    }
}