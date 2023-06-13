#include <stdio.h>

int calc(int n1, char op, int n2) {
    switch (op) {
        case '+':
            return n1 + n2;
        case '-':
            return n1 - n2;
        case '*':
            return n1 * n2;
        case '/':
            return n1 / n2;
        case '%':
            return n1 % n2;
        default:
            printf("Invalid option");
            break;
    }
    return 0;
}

int main() {
    int n1, n2;
    char op;
    printf("Enter number1: ");
    scanf("%d", &n1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter number2: ");
    scanf("%d", &n2);
    int res = calc(n1, op, n2);
    printf("Result: %d",res);
}
