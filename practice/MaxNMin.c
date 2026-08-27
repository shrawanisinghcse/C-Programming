#include<stdio.h>

int main() {

    float arr[50];

    int n;
    printf("How many numbers do you want to enter? \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float max = arr[0];
    float min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] >= max) {
            max = arr[i];
        }
        if(arr[i] <= min) {
            min = arr[i];
        }
    }

    printf("%f is maximum number of the number series \n %f is minimum number of the number series", max, min);
    return 0;
}