#include<stdio.h>

void Factorial(int n);

int main() {

    int n;
    printf("Enter number you want to find factorial of : \n");
    scanf("%d", &n);

    Factorial(n);

return 0;
}

void Factorial(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    printf("%d \n", factorial);
}