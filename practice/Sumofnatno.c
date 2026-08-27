#include <stdio.h>

void sum(int n);

int main() {

    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    sum(n);

    return 0;
}

void sum(int n) {

    int Sum = 0;
    for(int i = 1; i <= n; i++) {
        Sum += i;
    }
    
    printf("%d", Sum);
}