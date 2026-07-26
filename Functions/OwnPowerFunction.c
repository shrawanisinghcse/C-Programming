#include<stdio.h>

void power(int n,int x);

int main() {

    int n;
    printf("Enter base number : ");
    scanf("%d", &n);

    int x;
    printf("Enter power : ");
    scanf("%d", &x);

    power(n,x);

    return 0;
}

void power(int n,int x) {
    int m = 1;
    for(int i = 1;i <= x;i++) {
       m = m * n;
    }
    printf("%d", m) ;
}