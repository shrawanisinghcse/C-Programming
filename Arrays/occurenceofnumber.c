#include<stdio.h>

void Occr(int arr[], int n);

int main() {

   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0 , 1,1,1,3,3,3,5,5,6,8,9,43,54,65,7,0,3,6,8};

   int n;
   printf("Enter number : ");
   scanf("%d", &n);

   Occr(arr, n);


    return 0;
}

void Occr(int arr[], int n) {
    int count = 0;

    for(int i = 0; i < 29; i++) {
        if(arr[i] == n) {
            count = count + 1;
        }   
    }

    printf("%d", count);
}