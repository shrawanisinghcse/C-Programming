#include<stdio.h>

int main() {

    float price[3];
   printf("Enter price of first item : ");
   scanf("%f", &price[0]);

   printf("Enter price of first item : ");
    scanf("%f", &price[1]);

   printf("Enter price of first item : ");
    scanf("%f", &price[2]);

    printf("Final cost including GST : %f", price[0]+price[1]+price[2]+ 0.18 * (price[0]+price[1]+price[2]));

    return 0;
}