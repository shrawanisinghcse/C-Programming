#include<stdio.h>

int main() {

    int x;
    printf("Enter first number : ");
    scanf("%d", &x);

    int y;
    printf("Enter second number : ");
    scanf("%d", &y);

    int z;
    printf("Enter third number : ");
    scanf("%d", &z);

    int largest = x;
    
    if(largest < y) {
        largest = y;
    }
    if(largest < z) {
         largest = z;
        }
    
        printf("Largest Number is %d", largest);

    return 0;
}