#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,0,10,11,12,13,14,15,16,17,18,19,20};

    int n;
    printf("Enter the number you want to find position of in array(1-20) : ");
    scanf("%d", &n);

   int  target = 0;
    for(int i = 0; i <= 20; i++) {
        if(a[i] == n) {
           target = 1;
           printf("The given no is present at %d position in the array", i);
        }
    }
    if(target == 0) {
        printf("Entered number is not present in the array");
    }
    return 0;   
}