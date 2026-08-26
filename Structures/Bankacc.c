#include<stdio.h>

typedef struct BankAcc {
    char name[100];
    int AccNo;
} bank;

int main() {
    
    bank p1 = {"Shrawani", 234};
    bank p2 = {"Clark", 123};
    
    printf("Name = %s \n Acc No. : %d \n \n", p1.name, p1.AccNo);
    printf("Name = %s \n Acc No. : %d", p2.name, p2.AccNo);
    return 0;
}