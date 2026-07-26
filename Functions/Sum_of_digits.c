#include<stdio.h>

int sumD(int n);

int main() {

    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    sumD(n);
    
    return 0;
}

int sumD(int n)  {
    int sum = 0;
for (n;n > 0;n = n/10) {
    int i = n%10;
        sum = sum + i;
}
printf("%d", sum);
}
