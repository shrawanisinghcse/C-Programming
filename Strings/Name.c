#include<stdio.h>

int main() {

    char name[50];
    printf("Please enter your full name : ");
    fgets(name, 50, stdin);

    printf("Your full name is %s", name);
    return 0;
}