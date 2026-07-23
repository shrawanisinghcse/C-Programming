#include<stdio.h>

int factorial(int n);

int main() {

    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Factorial is %d",factorial(n));

return 0;
}

int factorial(int n) {
    if(n == 1) {
        return 1;
    }

    int FNm1 = factorial(n-1);
    int FN = FNm1 * n;
    return FN;
}