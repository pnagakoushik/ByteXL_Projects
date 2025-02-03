#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }
    
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);
    return 0;
}
