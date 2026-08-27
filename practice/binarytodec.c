#include<stdio.h>
#include<math.h>

int main() {

    char b[50];
    printf("Enter binary number : ");
    fgets(b, 50, stdin);

     int decimal = 0;
     int valid = 1;
     int length = 0;

     while(b[length] != '\0' && b[length] != '\n') {
        length++;
     }

    for(int i = 0; i < length; i++) {
    if(b[i] != '0' && b[i] != '1') {
        printf("INVALID INPUT");
        valid = 0;
        break;
    }
    else {
        decimal += (b[i]-'0')* pow(2, length-i-1);
    }
    }

    if(valid == 1) {
    printf("Decimal equivalent of this binary is %d", decimal);
    }
    return 0;
    
}