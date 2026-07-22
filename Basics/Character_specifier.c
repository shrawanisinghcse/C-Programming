#include<stdio.h>

int main() {

    char a;
    printf("Enter character : ");
    scanf("%c", &a);

    if(a>= 'A' && a<= 'Z') {
        printf("UPPER CASE");
    }
    else if(a>= 'a' && a<= 'z') {
        printf("LOWER CASE");
    }
    else if(a>= '0' && a<= '9') {
        printf("DIGIT");
    }
    else{
        printf("INVALID");
    }

    return 0;
}