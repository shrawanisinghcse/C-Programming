#include<stdio.h>

int sum(int x, int y);

int main() {

    int x;
    printf("Enter first number : ");
    scanf("%d", &x);

    int y;
    printf("Enter second number : ");
    scanf("%d", &y);

    int s = sum(x, y);
    printf("sum is %d", s);

return 0;
}

int sum(int x, int y) {
return x + y;
}