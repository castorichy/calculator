 #include "main.h"

/**
 * main - Main Entry
 * 
 * Return: return zero
*/
int main(void)
{
    char operator, choice;
    float result;
    int first_number, second_number;

    printf("---------------/----------------\\----------------\n");
    printf("\t\tSIMPLE CALCULATOR\n");
    printf("---------------\\----------------/----------------\n");
    printf("\n");
    printf("\t\tAvailable operations\n");
    printf("\t\t--------------------\n");
    printf("number\t\t|Oparations\t\t|Operators\n");
    printf("--------------------------------------------------\n");
    printf("1. \t\tAddition\t\t+\n");
    printf("2. \t\tSubtraction\t\t-\n");
    printf("3. \t\tMultiplication\t\tx\n");
    printf("4. \t\tDivision\t\t/\n ");
    printf("\n\twelcome let's calculate something:\n");
    back:
    printf("\n");
    printf("\t-^-\n");
    printf("First Number: ");
    scanf("%d", &first_number);
    printf("Operator: ");
    scanf("%s", &operator);
    printf("Second Number: ");
    scanf("%d", &second_number);
    
    printf("\ncalculating...\n\t%d %c %d\n", first_number, operator, second_number);
    result = calc(first_number, operator, second_number);
    printf("\tYour anser :(\n");
    display(result, operator);
    printf("\n\tDo you want to continue? y/n: ");
    scanf("%s", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        printf("\n\t\tWelcom back\n");
        goto back;
    }
    else if (choice == 'n' || choice == 'N')
        printf("\n\tThank you for using SIMPLE CALCULATOR\n\t\tWELCOME AGAIN\n\t\t:(");
    else
        exit(1);

    return (0);
}