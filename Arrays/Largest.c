#include<stdio.h>

void Largest(int arr[]);

int main() {

    int arr[] = {12,234,56,75,78,45,34,87,32,567,132,56,675,76,334,68,987,35};

    Largest(arr);
    return 0;
}

void Largest(int arr[]){
int largest = arr[0];
for(int i = 1; i < 18; i++) {
    if(arr[i] > largest) {
        largest = arr[i];
    }
}
printf("%d", largest);
}
