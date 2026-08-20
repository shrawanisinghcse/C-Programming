#include<stdio.h>

int odd(int arr[], int n);

int main() {
    int arr[] = {1,2,3,4,5,6,78,9,786};
    printf("%d", odd(arr, 9));

    
    return 0;
}

int odd(int arr[], int n){
int count = 0;
for(int i = 0;i < n;i++){
    if(arr[i]%2 != 0){
        count++;
    }
}
return count;
}