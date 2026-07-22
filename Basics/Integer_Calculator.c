#include<stdio.h>

int main() {

    int x;
    printf("Enter first number : ");
    scanf("%d", &x);

    char n;
    printf("Enter required operation(+,-,/,*) : ");
    scanf(" %c", &n);

    int y;
    printf("Enter second number : ");
    scanf("%d", &y);

    switch(n) {

        case '+':
        printf("%d", x + y);
        break;

        case '-':
        printf("%d", x - y);
        break;

        case '/':
        printf("%d", x / y);
        break;

        case '*':
        printf("%d", x * y);
        break;

        default:
        printf("Invalid operation");
    }

    return 0;
}