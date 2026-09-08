#include<stdio.h>

int main() {

    int n;
    printf("By how many steps do you want to rotate the array to the left (counter-clockwise)? \n");
    scanf("%d", &n);

    char arr[10] = {',', '$', '@', '#', ')', '^', '&', '!', '*', '|'};

    
    for(int i = 0; i < 10; i++) {
        if(i < n) {
        arr[i] = arr[14 - n + i];
        }
        else {
            arr[i] = arr[i - n];
        }
    }
    
    return 0;

    
}