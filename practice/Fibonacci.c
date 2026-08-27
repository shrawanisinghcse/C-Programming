#include<stdio.h>

int Fib(int n);

int main() {

    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++) {
        printf("%d \n", Fib(i));
    }

    return 0;
}

int Fib(int n) {

    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    
    else{int FibNm1 = Fib(n-1);
    int FibNm2 = Fib(n-2);
    int FibN = FibNm1 + FibNm2;
    return FibN;
    }
}