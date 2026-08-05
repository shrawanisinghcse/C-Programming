#include<stdio.h>

int main() {

    int marks[3];
    printf("Enter Physics score : ");
    scanf("%d", &marks[0]);

    printf("Enter Mathematics score : ");
    scanf("%d", &marks[1]);

    printf("Enter Chemistry score : ");
    scanf("%d", &marks[2]);

    printf("Physics = %d, Chemistry = %d, Mathematics = %d", marks[0], marks[2], marks[1]);

 return 0;
}