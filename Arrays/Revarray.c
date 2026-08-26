//Reversing array using classic function way

#include<stdio.h>

int Rev(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    Rev(arr, 5);
    

    return 0;
}

int Rev(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        int FirstVal = arr[i];
        int SecondVal = arr[n-i-1];
        arr[i] = SecondVal;
        arr[n-i-1] = FirstVal;
    }
    for(int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
}