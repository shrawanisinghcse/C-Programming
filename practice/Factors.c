#include<stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int t = 0;
    printf("1 \n");
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            printf("%d \n", i);
        }
    }
    printf("%d", n);
    return 0;
}