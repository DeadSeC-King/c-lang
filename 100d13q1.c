//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    char op;
    float num1, num2, result;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        }
        else
        {
            printf("Error! Division by zero.\n");
        }
        break;
    case '%':
        if ((int)num2 != 0)
        {
            result = (int)num1 % (int)num2;
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
        }
        else
        {
            printf("Error! Division by zero.\n");
        }
        break;
    default:
        printf("Error! Operator is not correct.\n");
        break;
    }
    return 0;
}