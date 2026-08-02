#include<stdio.h>

void function(int a, int b, int *sum, int *prod, float *avg);

int main() {

    int a;
    printf("Enter first number : ");
    scanf("%d", &a);

    int b;
    printf("Enter second number : ");
    scanf("%d", &b);

    int sum, prod;
    float avg;

    function(a, b, &sum, &prod, &avg);

    printf("Sum = %d \n", sum);
    printf("Product = %d \n", prod);
    printf("Average = %f", avg);
    return 0;
}

void function(int a, int b, int *sum, int *prod, float *avg) {
    *sum = a + b;
    *prod = a*b;
    *avg = (a + b)/2.0;
}