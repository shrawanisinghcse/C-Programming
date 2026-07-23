#include<stdio.h>

float F(float c);

int main() {

    float c;
    printf("Enter temperature(in celsius) : ");
    scanf("%f", &c);

    printf("%f celsius = %f fahrenheit",c, 1.8 * c + 32);

return 0;
}

float F(float c) {
    return 1.8 * c + 32;
}