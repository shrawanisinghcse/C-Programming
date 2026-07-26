#include<stdio.h>

int main() {

    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int c;

    for(int i = 0;i <= n; i++) {
        if(i == 0) {
            c = 0;
        }
        else if(i == 1) {
            c = 1;
        }
        else {
            c = a + b;
            a = b;
            b = c;
        }
    }

    printf("%d", c);
    return 0;
}