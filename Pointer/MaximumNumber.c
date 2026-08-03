#include<stdio.h>

int max(int *a, int *b);

int main() {

    int a;
    printf("Enter first number : ");
    scanf("%d", &a);

    int b;
    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Maximum number among two numbers is %d", max(&a,&b));

    return 0;
}

int max(int *a, int *b) {
    if(*a > *b) {
        return *a;
    }
    else {
        return *b;
    }
}