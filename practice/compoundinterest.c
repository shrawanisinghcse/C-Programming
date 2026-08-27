#include<stdio.h>
#include<math.h>

int main() {

    float principal;
    printf("Enter Principal Amount : ");
    scanf("%f", &principal);

    float time;
    printf("Enter Time(in years) : ");
    scanf("%f", &time);

    float rate;
    printf("Enter interest rate : ");
    scanf("%f", &rate);

    printf("Compound interest is %f", (principal * pow(1 + rate/100,time))- principal);

    return 0;
}