#include<stdio.h>

void storeTable(int arr[] [10], int n, int m, int number );

int main() {
    int table[2] [10];
    
    storeTable(table, 0, 10, 2);
    printf("\n");
    storeTable(table, 0, 10, 3);

    return 0;
}

void storeTable(int arr[] [10], int n, int m, int number){
    for(int i = 0; i < m; i++) {
        printf("%d \t", number * (i + 1));
    }
}

