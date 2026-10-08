#include<stdio.h>

int main() {

    //A palindrome number stays the same even if the digits are reversed
    int n;
    printf("Enter number(upto 3 digits) : ");
    scanf("%d", &n);

    int First = n/100;
    int Second = (n%100)/10;
    int Third = n%10;

    int reverse = Third*100 + Second*10 + First;

    if(n == reverse) {
        printf("%d is a palindrome number", n);
    }
    else {
        printf("%d is not a palindrome number", n);
    }
return 0;
}