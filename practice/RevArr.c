#include <stdio.h>

int main() {
    
    int arr[] = {3, 4, 6, 5, 8};

    for(int i = 0;i < 5; i++) {
        printf("%d \t", arr[5-i-1]);
    }
}