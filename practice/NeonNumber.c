#include<stdio.h>
#include<math.h>

int main() {
    //Neon number is a number whose square's sum of digits is equal to the number itself

    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int square = n*n;
    int sum = 0;

    for(int i = square;i > 0; i/=10) {
        int digit = i%10;
        sum += digit;
    }
   
    if(sum == n) {
        printf("Given number is neon number");
    }
    else {
        printf("Given number is not a neon number");
    }
    return 0;
}