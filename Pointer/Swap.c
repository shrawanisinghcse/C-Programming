#include<stdio.h>

void swap(int *a,int *b);

int main(){

    int a;
    printf("Enter a : ");
    scanf("%d", &a);

    int b;
    printf("Enter b : ");
    scanf("%d", &b);

    swap(&a, &b);

    //Due to input of address instead of value, value of both numbers changed outside the function too
    
    printf("a = %d & b = %d", a, b);

    return 0;
}

void swap(int *a,int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}