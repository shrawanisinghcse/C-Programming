#include<stdio.h>

int main() {

    int x;
    printf("Enter starting number : ");
    scanf("%d", &x);

    int y;
    printf("Enter ending number : ");
    scanf("%d", &y);

    for(int i = x; i <= y;i++) {
        printf("%d \n", i);
    }

    return 0;
}