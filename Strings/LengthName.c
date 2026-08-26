#include<stdio.h>

void Length(char arr[]);

int main() {

    char name[50];
    printf("Please enter your full name : ");
    fgets(name, 50, stdin);

    Length(name);
    return 0;
}

void Length(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        if(arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z') {
            count++;
        }
    }
    printf("Your name has %d letters.", count);
}