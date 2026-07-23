#include<stdio.h>

int printsum(int n);

int main() {

    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Sum is %d", printsum(n));

return 0;
}

int printsum(int n) {
    if(n == 1) {
        return 1;
    }
   int sumNm1 = printsum(n-1);
   int sumN = sumNm1+ n;
   return sumN;
}