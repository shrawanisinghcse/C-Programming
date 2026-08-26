#include<stdio.h>

void slice(char str[],int n, int m);

int main() {

    char str[] = "I don't know what to say so I am just writing whatever to program and get desired output. :)";

    slice(str, 3, 24);

    return 0;
}

void slice(char str[],int n, int m) {

    for(int i = n; i <= m; i++) {
        printf("%c", str[i]);
    }
}
