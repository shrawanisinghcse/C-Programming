#include <stdio.h>

int main() {

    int n;
    printf("How many elements are you going to enter in an array(<100) : ");
    scanf("%d", &n);

    int t;
    printf("Choose your type : \n 1. Integers \n 2. Decimal values \n 3. Characters \n");
    scanf("%d", &t);

    printf("Enter %d elements of respective type : ", n);

    if(t ==1) {
        int arr[100];
    for(int i = 0; i < n; i++) {
        if(scanf("%d", &arr[i]) != 1){
            printf("ERROR : You have entered something other than an integer.");
            return 1;
        }
    }
    
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
    else if(t == 2) {
        float arr[100];
        for(int i = 0; i < n; i++) {
       if(scanf("%f", &arr[i]) != 1){
            printf("ERROR : You have entered something other than a decimal value.");
            return 1;
        }
    }
    for(int i = 0; i < n/2; i++) {
        float FirstVal = arr[i];
        float SecondVal = arr[n-i-1];
        arr[i] = SecondVal;
        arr[n-i-1] = FirstVal;
    }
    for(int i = 0; i < n; i++) {
        printf("%f \t", arr[i]);
    }
    }
    else if(t == 3) {
        char arr[100];
        for(int i = 0; i < n; i++) {
       if(scanf("%c", &arr[i]) != 1){
            printf("ERROR : You have entered something other than a character.");
            return 1;
        }
    }
    for(int i = 0; i < n/2; i++) {
        char FirstVal = arr[i];
        char SecondVal = arr[n-i-1];
        arr[i] = SecondVal;
        arr[n-i-1] = FirstVal;
    }
    for(int i = 0; i < n; i++) {
        printf("%c \t", arr[i]);
    }
    }
    else {
        printf("INVALID INPUT");
    }

    return 0;
}